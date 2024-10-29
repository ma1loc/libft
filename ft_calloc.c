/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanflous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:01:29 by yanflous          #+#    #+#             */
/*   Updated: 2024/10/27 18:48:40 by yanflous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_case, size_t size)
{
	void	*ptr;
	size_t	t_size;

	t_size = n_case * size;
	ptr = malloc(t_size);
	if (!ptr)
		return (NULL);
	ft_memset (ptr, 0, t_size);
	return (ptr);
}