/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:35 by makkach           #+#    #+#             */
/*   Updated: 2025/01/26 15:33:15 by makkach          ###   ########.fr       */
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
}	t_stack;

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
t_stack	*find_min(t_stack *c);
void	median_status(t_stack *c);
void	cost(t_stack *a, t_stack *b);
void	set_cheepest(t_stack *c);
void	cheapest_reset(t_stack *c);
int     empty_string_check(char **argv, int argc);
void	indexing(t_stack *c, int argc);
t_stack	*find_max(t_stack *c);
t_stack	*find_max_for_index(t_stack *c);
void    indexing2(t_stack *c);
int find_max_data(t_stack *c);

# endif

        // while (*b)
        // {
        //     // max = find_max_index(*b);
        //     median_status(*b);
        //     indexing(*b, argc);
        //     tmp = find_max(*b);
        //     while ((*b)->data != tmp->data)
        //     {
        //         if (tmp->above_median == 0)
        //             rb(b);
        //         else if (tmp->above_median == 1)
        //             rrb(b);
        //     }
        //     pa(b, a);
        // }



        // printf("++++++++++%d, its index %d, i = %d\n", (*a)->data, (*a)-> index, i);
            // printf("//////////%d, its index %d, i = %d\n", (*b)->data, (*b)-> index, i);
            // printf("++++++++++%d, its index %d, i = %d\n", (*a)->data, (*a)-> index, i);
// printf("----------%d, its index %d, i = %d\n", (*a)->data, (*a)-> index, i + 18);
            // printf("\\\\\\\\\\%d, its index %d, i = %d\n", (*b)->data, (*b)-> index, i);
            // printf("----------%d, its index %d, i = %d\n", (*a)->data, (*a)-> index, i + 18);
     // printf("----------%d, its index %d, i = %d\n", (*a)->data, (*a)-> index, i + 18);
 // printf("\n\n");
  // printf("\n\n");
            // printf("**********%d\n", (*a)->data);
   // printf("\n\n%d\n\n", (*b)->data);
//    printf("**********%d, its index %d, i = %d\n", (*a)->data, (*a)-> index, i);