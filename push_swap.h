/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybaudoui <ybaudoui@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:31:26 by ybaudoui          #+#    #+#             */
/*   Updated: 2022/07/12 11:00:18 by ybaudoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include "libft.h"

typedef struct s_elements
{
    int             content;
    struct s_elements  *next;
}   t_elements;

typedef struct s_pile
{
    t_elements *top;
}   t_pile;

#endif