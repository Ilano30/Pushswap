/*
** EPITECH PROJECT, 2019
** rrb_action.c
** File description:
** rrb_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info rrb_action(list_info list)
{
    int tmp = 0;
    int i = 0;

    tmp = list.list_b[list.size_b - 1];
    i = list.list_b[list.size_b - 1];
    while (i > 0) {
        list.list_b[i] = list.list_b[i - 1];
        i--;
    }
    list.list_b[0] = tmp;
    my_putstr("rrb");
    return (list);
}
