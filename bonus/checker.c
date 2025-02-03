/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:58:31 by makkach           #+#    #+#             */
/*   Updated: 2025/02/03 19:05:24 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	count_args(char **nums)
{
	int	count;

	count = 0;
	while (nums[count])
		count++;
	return (count);
}
static void	execute_operation(char **line, t_stack **a, t_stack **b)
{
	int i;

	i = 0;
	while (line[i])
	{
		if (ft_strncmp(line[i], "sa", 2) == 0)
			sa(*a);
		else if (ft_strncmp(line[i], "sb", 2) == 0)
			sb(*b);
		else if (ft_strncmp(line[i], "ra", 2) == 0)
			ra(a);
		else if (ft_strncmp(line[i], "rb", 2) == 0)
			rb(b);
		else if (ft_strncmp(line[i], "rra", 3) == 0)
			rra(a);
		else if (ft_strncmp(line[i], "rrb", 3) == 0)
			rrb(b);
		else if (ft_strncmp(line[i], "pa", 2) == 0)
			pa(b, a);
		else if (ft_strncmp(line[i], "pb", 2) == 0)
			pb(a, b);
		else
			return ;
		i++;
	}
}

static char	**read_operations(void)
{
    int capacity = 10;
    char **line = malloc(sizeof(char *) * capacity);
    char *read_line;
    int i = 0;

    if (!line)
        return (NULL);

    while ((read_line = get_next_line(0)) != NULL)
    {
        if (i >= capacity - 1)
        {
            capacity *= 2;
            char **tmp = malloc(sizeof(char *) * capacity);
            if (!tmp)
            {
                int j = i;
                while (j > 0)
                {
                    free(line[--j]);
                }
                free(line);
                return (NULL);
            }
            int j = 0;
            while (j < i)
            {
                tmp[j] = line[j];
                j++;
            }
            free(line);
            line = tmp;
        }
        
        line[i++] = read_line;
    }
    
    line[i] = NULL;
    return (line);
}
static int	dup_checker(t_stack **c)
{
	t_stack	*current;
	t_stack	*next;
	t_stack	**tmp;

	current = *c;
	tmp = c;
	next = (*tmp)->next;
	while (current->next)
	{
		while (next)
		{
			if (current->data == next->data)
				return (1);
			next = next->next;
		}
		current = current->next;
		next = current->next;
	}
	return (0);
}

int main(int argc, char *argv[])
{
    t_stack *a;
    t_stack *b;
	char **operations;

    a = NULL;
    b = NULL;
    if (argc < 2)
        return (0);
    if (empty_string_check(argv, argc) == 1)
        return(write(1, "ERROR\n", 6), 1);
    argv = splitter_joinner(argv, argc);
    argc = count_args(argv);
    if (pars(argv, argc) == 1)
        return (write(1, "ERROR\n", 6), argv_free(argv), 1);
    a = init_stack(argv, argc);
    if (dup_checker(&a) == 1)
        return (write(1, "ERROR\n", 6),argv_free(argv), free_list(&a), 1);
    if (ifsorted(&a) == 1)
        return (free_list(&a), argv_free(argv), 0);
	argv_free(argv);
    operations = read_operations();
	execute_operation(operations, &a, &b);
	if (ifsorted(&a) == 1)
		write(1, "OK\n", 3);
	else if (ifsorted(&a) == 0)
		write(1, "ERROR\n", 6);
	free_list(&a);
	free_operations(operations);
}
