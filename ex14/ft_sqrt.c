/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apissier <apissier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 17:11:04 by apissier          #+#    #+#             */
/*   Updated: 2016/11/22 16:04:32 by apissier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if ((nb == 0) || (nb < 0))
		return (0);
	while ((i * i) < nb)
		i++;
	if ((nb % i) == 0)
		return (i);
	else
		return (0);
}
