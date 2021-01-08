/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:25:17 by rbourgea          #+#    #+#             */
/*   Updated: 2019/09/01 10:51:09 by rbourgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	m;
	int tab2;

	n = 0;
	while (n < size)
	{
		m = 0;
		while (m < (size - 1))
		{
			if (tab[m] > tab[n + 1])
			{
				tab2 = tab[m];
				tab[m] = tab[m + 1];
				tab[m + 1] = tab2;
			}
			m++;
		}
		n++;
	}
}
