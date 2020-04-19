/*
** EPITECH PROJECT, 2020
** msh_readline
** File description:
** line reader for minishell project
*/

#include "../my.h"

void read_char(void)
{
    int i = getchar
}

char *read_line(void)
{
    int bsize = msh_rl_bsize;
    int count = 0;
    char *buff = malloc(sizeof(char) * bsize);
    int i;

    if (!buff){
        write(2, "minishell : allocation error !", 31);
        my_putchar("\n");
        exit(EXIT_FAILURE);
    }
}
