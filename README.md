# libCC

`libCC` is a personal C library that brings together a set of essential utility functions for C projects. It follows the spirit of the 42 Libft project: rebuilding core libc-style tools from scratch, then adding practical helpers for strings, memory, file descriptor output, and linked lists.

The goal is simple: provide a reliable, readable, and reusable foundation for C development, so future projects can start from a clean base instead of rewriting the same low-level functions again and again.

## Description

The library is organized around several groups of functions:

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`.
- Conversions: `ft_atoi`, `ft_itoa`, `ft_toupper`, `ft_tolower`.
- Memory utilities: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- String utilities: `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strlcpy`, `ft_strlcat`.
- String creation and transformation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`.
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- Bonus linked list utilities: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## Build

Build the main library:

```sh
make
```

This creates the static archive:

```text
libCC.a
```

Build the library with bonus linked list functions:

```sh
make bonus
```

Remove object files:

```sh
make clean
```

Remove object files and the compiled library:

```sh
make fclean
```

Rebuild the project from scratch:

```sh
make re
```

## Usage

Include the header in your source code:

```c
#include "libft.h"
```

Compile your program with the library:

```sh
cc -Wall -Wextra -Werror main.c -L. -lCC -o main
```

The `-L.` flag tells the compiler to look for libraries in the current directory. The `-lCC` flag links your program with `libCC.a`.

## Structure

```text
.
├── Makefile
├── README.md
├── libft.h
├── ft_*.c
└── ft_*_bonus.c
```

`libft.h` contains the function prototypes and the `t_list` structure used by the bonus linked list functions.

## Note

`libCC` is designed as a compact C toolkit: close enough to libc to feel familiar, but organized as a practical base for future projects. It focuses on short, explicit, and testable functions.
