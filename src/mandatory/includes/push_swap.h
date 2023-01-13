/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:06:58 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/13 20:34:37 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <linked_list.h>
# include <libft.h>

/******************************************************************************\
* STACK																		   *
\******************************************************************************/

typedef struct s_stack
{
	int	top;
}	t_stack;

void	push(t_stack, int);
void	pop(t_stack);
void	peek(t_stack); // or top()
void	is_empty(t_stack);
void	is_full(t_stack);

/******************************************************************************\
* PUSH SWAP																	   *
\******************************************************************************/



#endif
