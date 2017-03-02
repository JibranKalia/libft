#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_listprint(t_list *tmp)
{
	while (tmp != NULL)
	{
		printf("%s\n", tmp->cnt);
		tmp = tmp->nxt;
	}
}

void	ft_pushback(t_list **alist, void const *src, size_t sze)
{
	t_list	*tmp;
	tmp = *alist;

	if (tmp)
	{
		while (tmp->nxt)
			tmp = tmp->nxt;
		tmp->nxt = ft_lstnew(src, sze);
	}
	else
		tmp->nxt = ft_lstnew(src, sze);
}

void	lst_del(void *src, size_t sze)
{
	free(src);
}

int		main(void)
{

	//extern int g_malloc_inject;

	//g_malloc_inject = 4;
	t_list *head;

	void(*del)(void*, size_t) = lst_del;

	const char *str1 = "Hi";
	const char *str2 = "how";
	const char *str3 = "are";
	const char *str4 = "you";
	const char *str5 = "?";
	head = ft_lstnew((void*)str1, sizeof(str1));
	ft_pushback(&head, (void*)str2, sizeof(str2));
	ft_pushback(&head, (void*)str3, sizeof(str3));
	ft_pushback(&head, (void*)str4, sizeof(str4));
	ft_pushback(&head, (void*)str5, sizeof(str5));

	ft_listprint(head);
	ft_lstdel(&head, del);

	return (0);
}