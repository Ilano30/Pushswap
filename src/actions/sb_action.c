/*
** EPITECH PROJECT, 2019
** sb_action.c
** File description:
** sb_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info sb_action(list_info list)
{
    int tmp = 0;

    if (list.size_b >= 2) {
        tmp = list.list_b[0];
        list.list_b[0] = list.list_b[1];
        list.list_b[1] = tmp;
        my_putstr("sb");
    }
    return (list);
}
