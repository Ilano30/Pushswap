/*
** EPITECH PROJECT, 2019
** algo.c
** File description:
** algo.c
*/

#include "my.h"
#include "pushswap.h"

int get_smallest_nb(list_info list)
{
    int smallest_nb = list.list_a[0];

    for (int i = 0; i != list.size_a; i++) {
        if (list.list_a[i] < smallest_nb) {
            smallest_nb = list.list_a[i];
        }
    }
    return (smallest_nb);
}

list_info put_element_to_beginning(list_info list)
{
    int smallest_nb = get_smallest_nb(list);

    while (list.list_a[0] != smallest_nb)
        list = ra_action(list);
    return (list);
}

list_info algo(list_info list)
{
    int size = list.size_a;

    for (int i = 0; i != size; i++) {
        list = put_element_to_beginning(list);
        list = pb_action(list);
    }
    for (int i = 0; i != size - 1; i++)
        list = pa_action(list);
    list = pa_action_space(list);
    return (list);
}
