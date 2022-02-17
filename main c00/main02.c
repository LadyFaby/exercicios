
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fapereir <fapereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:12:29 by fapereir          #+#    #+#             */
/*   Updated: 2022/02/07 17:15:17 by fapereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void ft_print_reverse_alphabet(void);

int main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
}