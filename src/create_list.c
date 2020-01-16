/*
** EPITECH PROJECT, 2019
** create_list.c
** File description:
** create_list.c
*/

#include "my.h"
#include "pushswap.h"

int *create_list_a(int ac, char **av)
{
    int *list_a = malloc(sizeof(int) * (ac - 1));
    int j = 1;

    for (int i = 0; i != ac - 1; i++) {
        list_a[i] = my_getnbr(av[j]);
        j++;
    }
    return (list_a);
}

int *create_list_b(int ac)
{
    int *list_b = malloc(sizeof(int) * (ac - 1));
    return (list_b);
}
