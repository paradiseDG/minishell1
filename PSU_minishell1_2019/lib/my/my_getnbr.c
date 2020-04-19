/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
    int i = -1;
    int index = 0;
    int nbr = 0;

    while (((str[index] == '-') || (str[index] == '+')) && (str[index] != '\0'))
        if (str[index++] == '-')
            i *= -1;
    while (str[index] != '\0') {
        if ((str[index] <= '9') && (str[index] >= '0')){
            nbr *= 10;
            nbr += str[index] - '0';
        }
        index++;
    }
    nbr *= (i == -1)?-1:1;
    return (nbr);
}
