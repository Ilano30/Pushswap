/*
** EPITECH PROJECT, 2019
** pa_action.c
** File description:
** pa_action.c
*/

#include "my.h"
#include "pushswap.h"

list_info pa_action(list_info list)
{
    int i = 0;

    if (list.size_b > 0) {
        i = list.size_a;
        while (i > 0) {
            list.list_a[i] = list.list_a[i - 1];
            i--;
        }
        list.size_a = list.size_a + 1;
        list.list_a[0] = list.list_b[0];
        i = 0;
        while (i < list.size_b - 1) {
            list.list_b[i] = list.list_b[i + 1];
            i++;
        }
        list.list_b[list.size_b - 1] = 0;
        list.size_b = list.size_b - 1;
    }
    my_putstr("pa ");
    return (list);
}

list_info pa_action_space(list_info list)
{
    int i = 0;

    if (list.size_b > 0) {
        i = list.size_a;
        while (i > 0) {
            list.list_a[i] = list.list_a[i - 1];
            i--;
        }
        list.size_a = list.size_a + 1;
        list.list_a[0] = list.list_b[0];
        i = 0;
        while (i < list.size_b - 1) {
            list.list_b[i] = list.list_b[i + 1];
            i++;
        }
        list.list_b[list.size_b - 1] = 0;
        list.size_b = list.size_b - 1;
    }
    my_putstr("pa");
    return (list);
}
