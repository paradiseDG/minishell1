/*
** EPITECH PROJECT, 2020
** minishell
** File description:
** unix command interpreter
*/

#include "../my.h"

void msh_loop(void)
{
    char *line;
    char **argv;
    int stat;

    do {
        my_putchar("> ");
        line = msh_readline();
        argv = mash_splitline(line);
        stat = msh_exec(argv);

        free(line);
        free(argv);
    }while (stat);
}

int main(int argc, char **argv)
{
    msh_loop();

    return EXIT_SUCCESS;
}
