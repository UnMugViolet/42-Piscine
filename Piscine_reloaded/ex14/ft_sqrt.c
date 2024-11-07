/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjaguin <pjaguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:38:59 by pjaguin           #+#    #+#             */
/*   Updated: 2024/11/05 16:56:52 by pjaguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (nb * nb);
}

/* #include <stdio.h>

int main(void)
{
	int nbr = 10;

	printf("%i",ft_sqrt(nbr));
} */