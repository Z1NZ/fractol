/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah <srabah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:07:24 by srabah            #+#    #+#             */
/*   Updated: 2014/11/07 20:51:29 by srabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char const *s)
{
	int		i;
	char	*ptrs;

	i = 0;
	ptrs = (char*)s;
	while (ptrs[i] != '\0')
		ft_putchar(ptrs[i++]);
}
