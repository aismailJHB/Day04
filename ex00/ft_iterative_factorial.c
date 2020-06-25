/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aismail <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:23:12 by aismail           #+#    #+#             */
/*   Updated: 2020/06/25 13:38:59 by aismail          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	  ft_iterative_factorial(int nb){

	int ret;

	ret = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb >= 1)
	{
		ret *= nb;
		nb--;
	}
	return (ret);

}

int main(){

	int i;
	ft_iterative_factorial(i);

	return 0;
}
