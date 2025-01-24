#include "push_swap.h"

t_stack *find_min_for_index(t_stack *c)
{
    t_stack *tmp;
    int lowest;
    lowest = INT_MAX;
    tmp = c;
    while (c)
    {
        if (c->data < lowest && c->index == -1)
            lowest = c->data;
        else
            c = c->next;
    }
    c = tmp;
    while (c)
    {
        if (c->data == lowest)
            break ;
        c = c->next;
    }
    tmp = c;
    return (tmp);
}

void indexing(t_stack *c, int argc)
{
    t_stack *tmp;
    t_stack *min;
    int i;

    i = 0;
    tmp = c;
    while (tmp)
    {
        tmp->index = -1;
        tmp = tmp->next;
    }
    while (i < argc - 1)
    {
        tmp = c;
        min = find_min_for_index(tmp);
        while (tmp->data != min->data)
            tmp = tmp->next;
        tmp->index = i;
        i++;
    }
}

// int main(int argc, char *argv[])
// {
//     t_stack *head;
//     t_stack *new;
//     t_stack *tmp;
//     int i;

//     i = 2;
//     head = malloc(sizeof(t_stack));
//     head->data = ft_atoi(argv[1]);
//     head->next = NULL;
//     tmp = head;
//     while (i < argc)
//     {
//         new = malloc(sizeof(t_stack));
//         new->data = ft_atoi(argv[i]);
//         new->next = NULL;
//         tmp->next = new;
//         tmp = new;
//         i++;
//     }
//     tmp = head;
//     while (tmp)
//     {
//         printf("%d\n", tmp->data);
//         printf("%d\n", tmp->index);
//         tmp = tmp->next;
//     }
//     printf("\n\n");
//     tmp = head;
//     indexing(tmp, argc);
//     while (tmp)
//     {
//         printf("%d\n", tmp->data);
//         printf("%d\n", tmp->index);
//         tmp = tmp->next;
//     }

//     return 0;
// }
