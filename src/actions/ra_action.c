/*
** EPITECH PROJECT, 2019
** ra_action.c
** File description:
** ra_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info ra_action(list_info list)
{
    int tmp = 0;
    int i = 0;

    tmp = list.list_a[0];
    while (i < list.size_a - 1) {
        list.list_a[i] = list.list_a[i + 1];
        i++;
    }
    list.list_a[i] = tmp;
    my_putstr("ra ");
    return (list);
}
