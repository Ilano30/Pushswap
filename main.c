/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main.c
*/

#include "my.h"
#include "pushswap.h"

list_info init_struct(list_info list, int ac, char **av)
{
    list.list_a = create_list_a(ac, av);
    list.list_b = create_list_b(ac);
    list.size_a = ac - 1;
    list.size_b = 0;
    return (list);
}

int main(int ac, char **av)
{
    list_info list;

    list = init_struct(list, ac, av);
    if (ac == 1) {
        my_putstr("Error : Bad number of argument !\n");
        return (84);
    }
    else if (check_sorting(list) != -1)
        my_putchar('\n');
    else {
        list = algo(list);
        printf("\n");
    }
    return (0);
}
