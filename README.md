# libft
> Common core project at 42 School - Paris
>
> This project is the continuation of the knowledge of the C language started during 42 pool (Admission test)

## Introduction
This project is about creating our own library in C language.

## General guidelines
1. You must use the command `ar` to create your library. Using the libtool command is forbidden.
2. Your libft.a has to be created at the root of your repository.
3. If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
4. You must rewrite the following functions in C:
- Mandatory part: Manipulate memory and strings
    - isalpha
    - isdigit
    - isalnum
    - isascii
    - isprint
    - strlen
    - memset
    - bzero
    - memcpy
    - memmove
    - strlcpy
    - strlcat
    - toupper
    - tolower
    - strchr
    - strrchr
    - strncmp
    - memchr
    - memcmp
    - strnstr
    - atoi
    - calloc
    - strdup

- Bonus part: Manipulate lists
    - ft_lstnew_bonus.c
    - ft_lstadd_front_bonus.c
    - ft_lstsize_bonus.c
    - ft_lstlast_bonus.c
    - ft_lstadd_back_bonus.c
    - ft_lstdelone_bonus.c
    - ft_lstclear_bonus.c
    - ft_lstiter_bonus.c
    - ft_lstmap_bonus.c

## Content
`Makefile` contains the rules for compiling the C code
