/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romanbtt <marvin@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:04:10 by romanbtt          #+#    #+#             */
/*   Updated: 2020/11/15 17:04:18 by romanbtt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

void	type_number(int s, char *c)
{
	char *t;

	if (c[0] == '0' && c[1] == '0' && c[2] == '0')
		return ;
	t = (char *)malloc(sizeof(char) * s + 1);
	t = "0";
	t = (s >= 4 && s <= 6) ? "1000" : t;
	t = (s >= 7 && s <= 9) ? "1000000" : t;
	t = (s >= 10 && s <= 12) ? "1000000000" : t;
	t = (s >= 13 && s <= 15) ? "1000000000000" : t;
	t = (s >= 16 && s <= 18) ? "1000000000000000" : t;
	t = (s >= 19 && s <= 21) ? "1000000000000000000" : t;
	t = (s >= 22 && s <= 24) ? "1000000000000000000000" : t;
	t = (s >= 25 && s <= 27) ? "1000000000000000000000000" : t;
	t = (s >= 28 && s <= 30) ? "1000000000000000000000000000" : t;
	t = (s >= 31 && s <= 33) ? "1000000000000000000000000000000" : t;
	t = (s >= 34 && s <= 36) ? "1000000000000000000000000000000000" : t;
	t = (s >= 37 && s <= 39) ? "1000000000000000000000000000000000000" : t;
	if (t[0] != '0')
	{
		ft_search(t);
	}
	t = NULL;
	free(t);
}
