/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah <srabah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 22:03:45 by srabah            #+#    #+#             */
/*   Updated: 2014/11/11 22:17:20 by srabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*str;

	if (!size)
		return (NULL);
	str = (void*)malloc(size);
	if (!str)
		return (NULL);
	ft_bzero((void*)str, size);
	return ((void*)str);
}
