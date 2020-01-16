/*
** EPITECH PROJECT, 2019
** check_sorting.c
** File description:
** check_sorting.c
*/

#include "my.h"
#include "pushswap.h"

int check_sorting(list_info list)
{
    for (int i = 1; i != list.size_a; i++)
        if (list.list_a[i] < list.list_a[i - 1])
            return (-1);
    return (0);
}
