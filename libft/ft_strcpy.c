/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srabah <srabah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/25 11:01:18 by srabah            #+#    #+#             */
/*   Updated: 2015/02/25 16:05:06 by srabah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *strdest, const char *strscr)
{
	int	i;

	i = 0;
	while (strscr[i] != '\0')
	{
		strdest[i] = strscr[i];
		i++;
	}
	strdest[i] = '\0';
	return (strdest);
}
