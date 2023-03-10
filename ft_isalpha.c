/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emeinert <emeinert@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:53:04 by emeinert          #+#    #+#             */
/*   Updated: 2022/11/11 11:21:53 by emeinert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int n)
{	
	int	answer;

	answer = 0;
	if ((n > 64 && n < 91) || (n > 96 && n < 123))
		answer = 1;
	else
		answer = 0;
	return (answer);
}
