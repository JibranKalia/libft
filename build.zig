const std = @import("std");

pub fn build(b: *std.Build) !void {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const libft = b.addStaticLibrary(.{
        .name = "libft",
        .target = target,
        .optimize = optimize,
    });

    libft.addIncludePath(.{ .path = "includes" });

    const c_flags = [_][]const u8{ "-Wall", "-Wextra", "-Werror" };

    const c_source_folders = [_][]const u8{
        "src/arr",
        "src/chr",
        "src/ctype",
        "src/lst",
        "src/math",
        "src/mem",
        "src/nbr",
        "src/printf",
        "src/str",
        "src/trees",
    };

    for (c_source_folders) |folder_path| {
        var dir = std.fs.cwd().openDir(folder_path, .{ .iterate = true }) catch |err| {
            std.log.err("unable to open directory '{s}/include': {any}", .{ folder_path, @errorName(err) });
            return err;
        };
        defer dir.close();

        var walker: std.fs.Dir.Walker = try dir.walk(allocator);
        defer walker.deinit();

        while (try walker.next()) |file| {
            if (std.mem.endsWith(u8, file.basename, "c")) {
                const c_file_path = try std.fs.path.join(allocator, &.{ folder_path, file.path });
                libft.addCSourceFile(.{ .file = .{ .path = c_file_path }, .flags = &c_flags });
            }
        }
    }
    b.installArtifact(libft);
}
