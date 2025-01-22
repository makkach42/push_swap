// #include "push_swap.h"

// // t_stack *set_next(t_stack **tmp, int counter)
// // {
// //     t_stack *tmp3;
// //     counter--;
// //     tmp3 = tmp[counter];
// //     while (counter)
// //     {
// //         tmp[counter]->next = tmp[counter - 1];
// //         counter--;
// //     }
// //     free(tmp);
// //     return (tmp3);
// // }
// // t_stack *init_stack(char **argv, int count)
// // {
// //     t_stack **tmp;
// //     t_stack *tmp3;
// //     int counter;

// //     counter = 0;
// //     tmp = (t_stack **)malloc(sizeof(t_stack *) * count);
// //     if (!tmp)
// //         return (free(tmp), NULL);
// //     while (counter + 1 < count)
// //     {
// //         tmp[counter] = malloc(sizeof(t_stack));
// //         if (!tmp[counter])
// //             return (NULL);
// //         if (counter == 0)
// //             tmp[counter]->next = NULL;
// //         tmp[counter]->data = ft_atoi(argv[counter + 1]);
// //         if (counter + 1 == count)
// //             tmp3 = tmp[counter];
// //         counter++;
// //     }
// //     return (set_next(tmp, counter));
// // }

// // int main(int argc, char *argv[])
// // {
// //     t_stack *a;
// //     t_stack *tmp;
// //     int i = 0;

// //     a = NULL;
// //     a = init_stack(argv, argc);
// //     tmp = a;
// //     while (a)
// //     {
// //         // printf("AAAA\n");
// //         printf("data          = %d\n", a->data);
// //         if (a->next)
// //             printf("next data = %d\n", a->next->data);
// //         printf("\n");
// //         a = a->next;
// //     }
// //     a = tmp;
// //     while (i < argc - 1)
// //     {
// //         tmp = a;
// //         a = a->next;
// //         free(tmp);
// //         i++;
// //     }
// //     system("leaks a.out");
// //     return 0;
// // }
// static t_stack *set_next(t_stack **tmp, int counter)
// {
//     t_stack *tmp3;
//     int counter2;
//     counter2 = 0;
//     counter--;
//     tmp3 = tmp[counter2];
//     while (counter)
//     {
//         tmp[counter2]->next = tmp[counter2 + 1];
//         counter2++;
//         counter--;
//     }
//     free(tmp);
//     return (tmp3);
// }
// t_stack *init_stack(char **argv, int count)
// {
//     t_stack **tmp;
//     t_stack *tmp3;
//     int counter;

//     counter = 0;
//     tmp = (t_stack **)malloc(sizeof(t_stack *) * count);
//     if (!tmp)
//         return (free(tmp), NULL);
//     while (counter + 1 < count)
//     {
//         tmp[counter] = malloc(sizeof(t_stack));
//         if (!tmp[counter])
//             return (NULL);
//         if (counter == 0)
//             tmp3 = tmp[counter];
//         tmp[counter]->data = ft_atoi(argv[counter + 1]);
//         if (counter + 1 == count)
//             tmp[counter]->next = NULL;
//         counter++;
//     }
//     return (set_next(tmp, counter));
// }
// int main(int argc, char *argv[])
// {
//     t_stack **a;
//     t_stack **b;
//     int i;
//     i = 2;
//     t_stack *head;
//     t_stack *tmp;
//     t_stack *tmp2;
//     t_stack *new_node;
//     b = &tmp2;
//     head = malloc(sizeof(t_stack));
//     head->data = ft_atoi(argv[1]);
//     head->next = NULL;
//     // head->previous = NULL;
//     tmp = head;
//     tmp2 = head->next;
//     a = &head;
//     while (i < argc)
//     {
//         new_node = malloc(sizeof(t_stack));
//         new_node->data = ft_atoi(argv[i]);
//         new_node->next = NULL;
//         // new_node->previous = tmp;
//         // if (i >= 3)
//         tmp->next = new_node;
//         tmp2 = tmp;
//         tmp = new_node;
//         i++;
//     }
//     tmp = head;
//     i = 1;
//     tmp = head;
//     tmp2 = tmp;
//     while (tmp)
//     {
//         printf("+++++++%d\n", tmp->data);
//         tmp = tmp->next;
//     }
//     tmp2 = init_stack(argv, argc);
//     a = &tmp2;
    
//     system("leaks a.out");
// }
// // int main(void)
// // {
// //     t_stack **a;
// //     t_stack *node;
// //     t_stack *node2;
// //     t_stack *node3;
// //     t_stack *tmp;

// //     node = malloc(sizeof(t_stack));
// //     node2 = malloc(sizeof(t_stack));
// //     node3 = malloc(sizeof(t_stack));
// //     node->data = 111;
// //     node2->data = 333;
// //     node3->data = 222;
// //     node->next = node2;
// //     node2->next = node3;
// //     node3->next = NULL;
// //     tmp = node;
// //     a = &node;
// //     while (tmp)
// //     {
// //         printf("%d\n", tmp->data);
// //         tmp = tmp->next;
// //     }
// //     printf("\n\n");
// //     ra(a);
// //     tmp = *a;
// //     // a = &tmp;
// //     while (tmp)
// //     {
// //         printf("%d\n", tmp->data);
// //         tmp = tmp->next;
// //     }
// // }
