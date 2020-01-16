/*
** EPITECH PROJECT, 2019
** rra_action.c
** File description:
** rra_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info rra_action(list_info list)
{
    int tmp = 0;
    int i = 0;

    tmp = list.list_a[list.size_a - 1];
    i = list.list_a[list.size_a - 1];
    while (i > 0) {
        list.list_a[i] = list.list_a[i - 1];
        i--;
    }
    list.list_a[0] = tmp;
    my_putstr("rra ");
    return (list);
}
