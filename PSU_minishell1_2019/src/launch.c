/*
** EPITECH PROJECT, 2020
** launch
** File description:
** launch the minishell
*/

#include "../my.h"

int msh_launch(char **argv)
{
    pid_t pid, wpid;
    int stat;

    pid = fork();
    if (pid == 0){
        if (execvp(argv[0], argv) == -1){
            perror("minishell");
        }
        exit(EXIT_FAILURE);
    }else if (pid < 0){
        perror("minishell");
    }else {
        do{
            wpid = waitpid(pid, &stat, WUNTRACED);
        }while (!WIFEXITED(stat) && !WIFSIGNAL(stat));
    }
    return (1);
}
