/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <jkalia@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 08:32:33 by jkalia            #+#    #+#             */
/*   Updated: 2017/06/28 10:45:36 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_log_err(char *file, int line, char *message, ...)
{
	char	*str_errno;
	va_list	ap;

	str_errno = errno == 0 ? "None" : strerror(errno);
	va_start(ap, message);
	ft_dprintf(STDERR_FILENO, "%{red}[ERROR] (%s:%d: errno: %s): "
			, file, line, str_errno);
	ft_vdprintf(STDERR_FILENO, message, ap);
	ft_dprintf(STDERR_FILENO, "%{eoc}\n");
	errno = 0;
	return (-1);
}

int		ft_log_debug(char *file, int line, char *message, ...)
{
	va_list		ap;

	va_start(ap, message);
	ft_dprintf(STDERR_FILENO, "%{green}[DEBUG] %s:%d: ", file, line);
	ft_vdprintf(STDERR_FILENO, message, ap);
	ft_dprintf(STDERR_FILENO, "%{eoc}\n");
	return (0);
}
