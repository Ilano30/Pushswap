/*
** EPITECH PROJECT, 2019
** rb_action.c
** File description:
** rb_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info rb_action(list_info list)
{
    int tmp = 0;
    int i = 0;

    tmp = list.list_b[0];
    while (i < list.size_b - 1) {
        list.list_b[i] = list.list_b[i + 1];
        i++;
    }
    list.list_b[i] = tmp;
    my_putstr("rb");
    return (list);
}
