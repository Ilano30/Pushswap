/*
** EPITECH PROJECT, 2019
** pushswap.h
** File description:
** pushswap.h
*/

#ifndef __PUSHSWAP_H__
#define __PUSHSWAP_H__

typedef struct list_info_t
{
    int *list_a;
    int *list_b;
    int size_a;
    int size_b;
}list_info;

int check_sorting(list_info list);
int *create_list_a(int ac, char **av);
int *create_list_b(int ac);
list_info algo(list_info list);
list_info pb_action(list_info list);
list_info pa_action(list_info list);
list_info pa_action_space(list_info list);
list_info ra_action(list_info list);

#endif /*__PUSHSWAP_H__*/
