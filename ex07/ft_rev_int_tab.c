/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 12:46:16 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/01 12:15:34 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	tab2[size];

	n = 0;
	size--;
	while (size >= 0)
	{
		tab2[n] = tab[size];
		n++;
		size--;
	}
	n--;
	size++;
	while (size <= n)
	{
		tab[size] = tab2[size];
		size++;
	}
}
