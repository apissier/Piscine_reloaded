/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 17:17:23 by apissier          #+#    #+#             */
/*   Updated: 2016/11/22 16:23:16 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}
