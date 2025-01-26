#include "push_swap.h"

t_stack *find_min_for_index(t_stack *c)
{
    t_stack *tmp = c;
    t_stack *min_node = NULL;
    int lowest = INT_MAX;

    while (c)
    {
        if (c->data < lowest && c->index == -1)
        {
            lowest = c->data;
            min_node = c;
        }
        c = c->next;
    }

    return min_node;
}
// void indexing(t_stack *c, int argc)
// {
//     t_stack *tmp;
//     t_stack *min;
//     int i;

//     // Reset all indices
//     tmp = c;
//     while (tmp)
//     {
//         tmp->index = -1;
//         tmp = tmp->next;
//     }

//     // Index the entire list
//     tmp = c;
//     for (i = 0; i < argc; i++)
//     {
//         min = find_min_for_index(tmp);
//         if (min)
//             min->index = i;
//         else
//             break;
//     }
// }
// int main(int argc, char *argv[])
// {
//     t_stack *head;
//     t_stack *tmp;
//     t_stack *new;
//     head = malloc(sizeof(t_stack));
//     head->data = ft_atoi(argv[1]);
//     head->next = NULL;
//     tmp = head;
//     int i = 2;
//     while (i < argc)
//     {
//         new = malloc(sizeof(t_stack));
//         new->data = ft_atoi(argv[i]);
//         tmp->next = new;
//         tmp = new;
//         i++;
//     }
//     tmp = head;
//     indexing(tmp, argc - 1);
//     tmp = head;
//     while (tmp)
//     {
//         printf("%d\n", tmp->index);
//         tmp = tmp->next;
//     }
//     return 0;
// }
