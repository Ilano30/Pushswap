/*
** EPITECH PROJECT, 2019
** sa_action.c
** File description:
** sa_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info sa_action(list_info list)
{
    int tmp = 0;

    if (list.size_a >= 2) {
        tmp = list.list_a[0];
        list.list_a[0] = list.list_a[1];
        list.list_a[1] = tmp;
        my_putstr("sa");
    }
    return (list);
}
