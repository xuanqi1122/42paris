/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 10:35:39 by xzhao             #+#    #+#             */
/*   Updated: 2019/06/11 23:51:23 by xzhao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int t;
	int pro;

	if (size > 0)
	{
		n = size - 1;
		t = 0;
		while (t < n)
		{
			pro = tab[t];
			tab[t] = tab[n];
			tab[n] = pro;
			t++;
			n--;
		}
	}
}
