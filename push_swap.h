/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:35 by makkach           #+#    #+#             */
/*   Updated: 2025/01/31 11:30:18 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}					t_stack;
char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup( char *s1);
size_t	ft_strlen( char *str);
char	**splitter_joinner(char **argv, int argc);
long	ft_atoi(char *str);
int		pars(char **argv, int argc);
int		valid(char *str);
int		range_check(char *str);
int		ifsorted(t_stack **a);
void	sortthree(t_stack **c);
int		stack_lenth(t_stack **c);
void	sa(t_stack *s);
void	sb(t_stack *s);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack **src, t_stack **dest);
void	pb(t_stack **src, t_stack **dest);
void	ra(t_stack **c);
void	rb(t_stack **c);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **c);
void	rrb(t_stack **c);
void	rrr(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b, int argc);
int		empty_string_check(char **argv, int argc);
void	indexing(t_stack *c);
void	free_list(t_stack **a);
void	argv_free(char **argv);
void	algo_helper(t_stack **b, int max);
void	algo_helper2(t_stack **b, int max);

#endif

/*
static int find_max_index(t_stack *stack)
{
    int max;
    t_stack *current;

    if (!stack)
        return (-1);
    max = stack->index;
    current = stack;
    while (current)
    {
        if (current->index > max)
            max = current->index;
        current = current->next;
    }
    return (max);
}

static void push_to_b(t_stack **a, t_stack **b, int start, int end)
{
    t_stack *tmp;
    int found;

    while (1)
    {
        tmp = *a;
        found = 0;
        while (tmp && !found)
        {
            if (tmp->index >= start && tmp->index <= end)
                found = 1;
            tmp = tmp->next;
        }
        if (!found)
            break;
        if ((*a)->index >= start && (*a)->index <= end)
        {
            pb(a, b);
        }
        else
            ra(a);
    }
}

static void sort_b_to_a(t_stack **a, t_stack **b)
{
    while (*b)
    {
        t_stack *tmp = *b;
        int max_index = find_max_index(*b);
        int pos = 0;
        int size = stack_lenth(b);
        
        while (tmp && tmp->index != max_index)
        {
            pos++;
            tmp = tmp->next;
        }
        
        while ((*b)->index != max_index)
        {
            if (pos <= size / 2)
                rb(b);
            else
                rrb(b);
        }
        pa(b, a);
    }
}

void less_than_100(t_stack **a, t_stack **b)
{
    int size;
    int chunk_size;
    int i;
    
    size = stack_lenth(a);
    indexing(*a);
    chunk_size = 15;
    
    i = 0;
    while (i < size)
    {
        push_to_b(a, b, i, i + chunk_size - 1);
        i += chunk_size;
    }
    
    sort_b_to_a(a, b);
}

void more_than_100(t_stack **a, t_stack **b)
{
    int size;
    int chunk_size;
    int i;
    
    size = stack_lenth(a);
    indexing(*a);
    chunk_size = 25;
    
    i = 0;
    while (i < size)
    {
        push_to_b(a, b, i, i + chunk_size - 1);
        i += chunk_size;
    }
    
    sort_b_to_a(a, b);
}

void sort_stack(t_stack **a, t_stack **b, int argc)
{
    if (argc > 100)
        more_than_100(a, b);
    else if (argc <= 100)
        less_than_100(a, b);
}*/