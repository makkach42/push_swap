/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:35 by makkach           #+#    #+#             */
/*   Updated: 2025/01/22 12:03:54 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
    int data;
    struct s_stack *next;
    int index;
    int above_median;
    int cost;
    int cheapest;
    struct s_stack *target;
}   t_stack;

char        **ft_split(char *s, char c);
char	    *ft_strjoin(char *s1, char *s2);
char	    *ft_strdup( char *s1);
size_t      ft_strlen( char *str);
char        **splitter_joinner(char **argv, int argc);
long        ft_atoi(char *str);
int         pars(char **argv, int argc);
int         valid(char *str);
int         range_check(char *str);
int         ifsorted(t_stack **a);
void        ft_lstadd_front(t_stack **lst, t_stack *new);
// t_stack     *sortthree(t_stack **c);
void        sortthree(t_stack **c);
int         stack_lenth(t_stack **c);
void        ft_lstadd_back(t_stack **lst, t_stack *new);
void        ft_lstadd_front(t_stack **lst, t_stack *new);
void        sa(t_stack *s);
void        sb(t_stack *s);
void        pa(t_stack **src, t_stack **dest);
void        pb(t_stack **src, t_stack **dest);
void        movetob(t_stack **src, t_stack **dest);
void        ra(t_stack **c);
void        rb(t_stack **c);
void        rra(t_stack **c);
void        rrb(t_stack **c);
t_stack     *init_stack(char **argv, int count);


# endif