// #include "push_swap.h"
// #include <stdio.h>

// // int    pars(char **argv, int argc)
// // {
// //     int i;

// //     i = 0;

// //     if (!argv)
// //         return (0);
// //     while (i < argc)
// //     {
// //         if (range_check(argv[i]) == 0)
// //         {
// //             // write(1, "ERROR\n", 6);
// //             return (1);
// //         }
// //         else
// //             // write(1, "OK\n", 3);
// //             return (0);
// //         i++;
// //     }
// //     return (1);
// // }
// // //valid(argv[i]) == 0 || 

// // int    dup_checker(t_stack **c)
// // {
// //     t_stack *current;
// //     t_stack *next;
// //     t_stack **tmp;

// //     current = *c;
// //     tmp = c;
// //     next = (*tmp)->next;
// //     while (current->next)
// //     {
// //         // printf("current %d\n", current->data);
// //         // printf("next %d\n", next->data);
// //         while (next)
// //         {
// //             // printf("current to compare [%d]\n", current->data);
// //             // printf("next to be compared with [%d]\n", next->data);
// //             if (current->data == next->data)
// //             {
// //                 // write(1, "ERROR\n", 6);
// //                 return (1);
// //             }
// //             next = next->next;
// //         }
// //         current = current->next;
// //         next = current->next;
// //     }
// //     return (0);
// // }
// // int valid(char *str)
// // {
// //     int i;

// //     i = 0;
// //     if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
// //         i++;
// //     else if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
// //         i++;
// //     else if (str[i] < '0' || str[i] > '9')
// //         return (0);
// //     // printf("AAAAA\n");
// //     while (str[i] >= '0' && str[i] <= '9')
// //         i++;
// //     if ((size_t)i < ft_strlen(str))
// //         return (0);
// //     return (1);
// // }

// // int range_check(char *str)
// // {
// //     if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
// //         return (0);
// //     return (1);
// // }

// // // int ifsorted(t_stack **a)
// // // {
// // //     t_stack *current;
// // //     t_stack *next;

// // //     current = *a;
// // //     while (current->next)
// // //     {
// // //         next = current->next;
// // //         if (current->data > next->data)
// // //             return (1);
// // //         current = current->next;
// // //     }
// // //     return (0);
// // // }

// // // int dups(t_stack *c, int nbr)
// // // {
// // //     t_stack *tmp;

// // //     tmp = c;
// // //     tmp = tmp->next;
// // //     while (tmp)
// // //     {
// // //         if (tmp->data == nbr)
// // //         {
// // //             // write(1, "ERROR\n", 6);
// // //             return (1);
// // //         }
// // //         tmp = tmp->next;
// // //     }
// // //     // write(1, "OK\n", 3);
// // //     return (0);
// // // }
// // // int valid(char *str)
// // // {
// // //     int i;

// // //     i = 0;
// // //     while (str[i])
// // //     {
// // //         if (str[i] == '+' || str[i] == '-')
// // //             i++;
// // //         if (!(str[i] >= '0' && str[i] <= '9'))
// // //             return (0);
// // //         i++;
// // //     }
// // //     return (1);
// // // }
// // int    dup_checker(t_stack **c)
// // {
// //     t_stack *tmp;

// //     tmp = *c;
// //     while (tmp)
// //     {
// //         if (dups(tmp, tmp->data) == 1)
// //             return (1);
// //         tmp = tmp->next;
// //     }
// //     return (0);
// // }
// // int dups(t_stack *c, int nbr)
// // {
// //     t_stack *tmp;

// //     tmp = c;
// //     tmp = tmp->next;
// //     while (tmp)
// //     {
// //         if (tmp->data == nbr)
// //         {
// //             // write(1, "ERROR\n", 6);
// //             return (1);
// //         }
// //         tmp = tmp->next;
// //     }
// //     // write(1, "OK\n", 3);
// //     return (0);
// // }
// // void innit_stack(t_stack **c, char **argv, int count)
// // {
// //     t_stack *new_node;
// //     t_stack *tmp;
// //     t_stack *head;
// //     int i;

// //     i = 2;

// //     head = ft_lstnew(argv[1]);
// //     tmp = head;
// //     while (argv && argv[i])
// //     {
// //         new_node = ft_lstnew(argv[i]);
// //         tmp->next = new_node;
// //         tmp = new_node;
// //         i++;
// //     }
// //     c = &head;
// //     // tmp = *c;
// //     // while (tmp)
// //     // {
// //     //     printf("%d\n", tmp->data);
// //     //     tmp = tmp->next;
// //     // }
// // }
// // t_stack *sorttwo(t_stack **a)
// // {
// //     t_stack *current;
// //     t_stack *next;
// //     t_stack *tmp;

// //     current = *a;
// //     next = current->next;
// //     if (current->data > next->data)
// //     {
// //         printf("not sorted\n");
// //         tmp = swap_a(a);
// //         return (tmp);
// //     }
// //     else
// //     printf("sorted\n");
// //     return (NULL);
// // }
// // t_stack *sortthree(t_stack *a)
// // {
// //     t_stack *current;
// //     t_stack *next;
// //     t_stack *tmp;

// //     current = a;
// //     next = current->next;
// //     tmp = current;
// //     if (current > next)
// //         current = swap_a(a);
// //     else if()
// // }
// // t_stack *find_highest(t_stack **c)
// // {
// //     t_stack *current;
// //     t_stack *highest;
// //     t_stack **tmp;

// //     tmp = c;
// //     current = *tmp;
// //     highest = malloc(sizeof(t_stack));
// //     highest->data = 0;
// //     while (current)
// //     {
// //         if (highest->data < current->data)
// //         {
// //             highest->data = current->data;
// //             current = current->next;
// //         }
// //         else if (highest->data > current->data)
// //             current = current->next;
// //         else
// //             current = current->next;
// //     }
// //     return (highest);
// // }
// // t_stack *sortthree(t_stack **c)
// // {
// //     t_stack *current;
// //     t_stack *next;
// //     t_stack *tmp;
// //     t_stack *highest;

// //     current = *c;
// //     next = current->next;
// //     highest = find_highest(c);
// //     tmp = *c;
// //     if (current->data == highest->data)
// //     {
// //         tmp = rotate_a(c);
// //     }
// //     else if (next->data == highest->data)
// //     {
// //         tmp = reverse_rotate_a(c);
// //     }
// //     if (current->data > next->data)
// //     {
// //         tmp = swap_a(c);
// //     }
// //     free(highest);
// //     return (tmp);
// // }
//         // printf("*********************%d\n", tmp->data);
//         // printf("+++++++++++++++++++++%d\n", tmp->cost);
//         // printf("---------------------%ld\n", cheepest);


// void cheapest_reset(t_stack *c)
// {
//     t_stack *tmp;
//     tmp = c;
//     while (tmp)
//     {
//         if (tmp->cheapest == 1)
//             break ;
//         tmp = tmp->next;
//     }
//     if (tmp && tmp->cheapest == 1)
//         tmp->cheapest = 0;
// }
// void set_cheepest(t_stack *c)
// {
//     t_stack *tmp;
//     long cheepest;
//     tmp = c;
//     cheepest = LONG_MAX;
//     while (tmp)
//     {
//         if (tmp->cost < cheepest)
//             cheepest = tmp->cost;
//         tmp = tmp->next;
//     }
//     tmp = c;
//     while (tmp)
//     {
//         if (tmp->cost == cheepest)
//             break ;
//         tmp = tmp->next;
//     }
//     tmp->cheapest = 1;
// }
// void cost(t_stack *a, t_stack *b)
// {
//     int c;
//     int d;

//     c = stack_lenth(&a);
//     d = stack_lenth(&b);
//     while (b)
//     {
//         b->cost = b->index;
//         if (b->above_median == 1)
//             b->cost = d - b->index;
//         if (b->target->above_median == 0)
//             b->cost += d - b->target->index;
//         else
//             b->cost += c - (b->target->index);
//         b = b->next;
//     }
// }
// void current_index(t_stack *c)
// {
//     int i;
//     int median;
//     t_stack *tmp;
//     median = stack_lenth(&c) / 2;
//     tmp = c;
//     i = 0;
//     while (tmp)
//     {
//         tmp->index = i;
//         if (i + 1 <= median)
//             tmp->above_median = 0;
//         else
//             tmp->above_median = 1;
//         i++;
//         tmp = tmp->next;
//     }
// }
// t_stack *find_max(t_stack *c)
// {
//     t_stack *tmp;
//     int highest;
//     highest = 0;
//     tmp = c;
//     while (c)
//     {
//         if (c->data > highest)
//             highest = c->data;
//         else
//             c = c->next;
//     }
//     c = tmp;
//     while (c)
//     {
//         if (c->data == highest)
//             break ;
//         c = c->next;
//     }
//     tmp = c;
//     return (tmp);
// }
// t_stack *find_min(t_stack *c)
// {
//     t_stack *tmp;
//     int lowest;
//     lowest = INT_MAX;
//     tmp = c;
//     while (c)
//     {
//         if (c->data < lowest)
//             lowest = c->data;
//         else
//             c = c->next;
//     }
//     c = tmp;
//     while (c)
//     {
//         if (c->data == lowest)
//             break ;
//         c = c->next;
//     }
//     tmp = c;
//     return (tmp);
// }

// void    set_a_target(t_stack *a, t_stack *b)
// {
//     t_stack *target;
//     t_stack *this_a;
//     long    best_match;

//     while (b)
//     {
//         best_match = LONG_MAX;
//         this_a = a;
//         while (this_a)
//         {
//             if (b->data < this_a->data && this_a->data < best_match)
//             {
//                 best_match = this_a->data;
//                 target = this_a;
//             }
//             this_a = this_a->next;
//         }
//         if (best_match == LONG_MAX)
//             b->target = find_min(a);
//         else 
//             b->target = target;
//         b = b->next;
//     }
// }

// void node_innit(t_stack *a, t_stack *b)
// {
//     current_index(a);
//     current_index(b);
//     set_a_target(a, b);
//     cost(a, b);
//     cheapest_reset(b);
//     set_cheepest(b);
// }
// void b_push(t_stack **b, t_stack **a)
// {
//     t_stack *tmp;
//     t_stack *tmp2;
//     tmp = *b;
//     while (tmp)
//     {
//         if (tmp->cheapest == 1)
//             break ;
//         tmp = tmp->next;
//     }
//     tmp2 = tmp->target;
//     while (b && (*b) && tmp && (*b)->data != tmp->data)
//     {
//         if (tmp->above_median == 0)
//             rb(b);
//         else if (tmp->above_median == 1)
//             rrb(b);
//     }
//     while (a && (*a) && tmp2 && (*a)->data != tmp2->data)
//     {
//         if (tmp2->above_median == 0)
//             ra(a);
//         else if (tmp2->above_median == 1)
//             rra(a);
//     }
//     pa(b, a);
// }

// void    sort_stack(t_stack **a, t_stack **b)
// {
//     t_stack *tmp;
//     t_stack *tmp2;
//     t_stack *t;

//     if (stack_lenth(a) > 3)
//         pb(a, b);
//     if (stack_lenth(a) > 3)
//         pb(a, b);
//     while (stack_lenth(a) > 3)
//     {
//         node_innit(*a, *b);
//         pb(a, b);
//         node_innit(*a, *b);
//     }
//     sortthree(a);
//     if (*b)
//         node_innit(*a, *b);
//     while (*b)
//     {
//         node_innit(*a, *b);
//         b_push(b, a);
//     }
//     tmp = find_min(*a);
//     if (tmp->above_median == 1)
//     {
//         while (*a != tmp)
//             rra(a);
//     }
//     else if(tmp->above_median == 0)
//     {
//         while (*a != tmp)
//             ra(a);
//     }
// }
// int main(int argc, char *argv[])//above median = 0 below median = 1
// {
//     t_stack **a;
//     t_stack **b;
//     int i;
//     i = 2;
//     t_stack *tmp;
//     t_stack *tmp2;
//     tmp = init_stack(argv, argc);
//     tmp2 = NULL;
//     sort_stack(&tmp, &tmp2);
//     // while (tmp)
//     // {
//     //     printf("%d\n", tmp->data);
//     //     tmp = tmp->next;
//     // }
//     // printf("\n\n");
//     // while (tmp2)
//     // {
//     //     printf("tmp2->data         = %d\n", tmp2->data);
//     //     tmp2 = tmp2->next;
//     // }

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
// //     tmp = sortthree(a);
// //     a = &tmp;
// //     while (tmp)
// //     {
// //         printf("%d\n", tmp->data);
// //         tmp = tmp->next;
// //     }
// // }


// // int main(int argc, char *argv[])
// // {
// //     t_stack **a;
// //     t_stack *tmp;

// //     a = NULL;
// //     printf("%p\n", *a);
// //     innit_stack(a, argv, argc);
// //     printf("%p\n", *a);
// //     return 0;
// // }

