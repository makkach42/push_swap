/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:35 by makkach           #+#    #+#             */
/*   Updated: 2025/02/14 12:51:50 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	int				index;
}					t_stack;
char	**ft_split(char *s, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup( char *s1);
size_t	ft_strlen( char *str);
char	**splitter_joinner(char **argv, int argc);
long	ft_atoi(char *str);
int		pars(char **argv, int argc);
int		ifsorted(t_stack **a);
void	sortthree(t_stack **c);
int		stack_lenth(t_stack **c);
void	sa_bonus(t_stack *s);
void	sb_bonus(t_stack *s);
void	ss_bonus(t_stack *a, t_stack *b);
void	pa_bonus(t_stack **src, t_stack **dest);
void	pb_bonus(t_stack **src, t_stack **dest);
void	ra_bonus(t_stack **c);
void	rb_bonus(t_stack **c);
void	rr_bonus(t_stack **a, t_stack **b);
void	rra_bonus(t_stack **c);
void	rrb_bonus(t_stack **c);
void	rrr_bonus(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b, int argc);
int		empty_string_check(char **argv, int argc);
void	indexing(t_stack *c);
void	free_list(t_stack **a);
void	argv_free(char **argv);
void	algo_helper(t_stack **b, int max);
void	algo_helper2(t_stack **b, int max);
char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
t_stack	*init_stack(char **argv, int count);
int		ft_strncmp(char *str1, char *str2, size_t n);
void	free_operations(char **operations);
void	checker_helper(char **tmp, int i, char **line);
void	last_free(t_stack **a, char **operations);
char	**reallocate_line(char **line, int i, int *capacity);
void	handle_swap_operations(char *op, t_stack **a, t_stack **b);
void	handle_rotate_operations(char *op, t_stack **a, t_stack **b);
void	handle_reverse_rotate_operations(char *op, t_stack **a, t_stack **b);
void	handle_push_operations(char *op, t_stack **a, t_stack **b);
int		is_valid_operation(char *op);

#endif
