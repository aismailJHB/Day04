/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:48:46 by aismail           #+#    #+#             */
/*   Updated: 2020/06/25 13:54:38 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{

	if (nb > 12)

		return (0);
	if (nb < 0)

		return (0);
	if (nb == 0)

		return (1);
	else

		return (nb * ft_recursive_factorial(nb - 1));
}

int main(){

	int i;
	
	ft_recursive_factorial(i);

}
