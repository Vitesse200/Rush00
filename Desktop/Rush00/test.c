/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaillar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:35:21 by lgaillar          #+#    #+#             */
/*   Updated: 2021/07/10 18:52:36 by lgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaillar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:35:13 by lgaillar          #+#    #+#             */
/*   Updated: 2021/07/10 17:35:13 by lgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_HandT(int x, int y);
void	ft_middle(int x, int y);
void	ft_putchar(char	c);

void test(int x, int y)
{
	int reset;

	if ( x < 0)
		x = x * -1;
	if ( y < 0)
		 y = y * -1;
	reset = x;
	ft_HandT(x, y);
	if( y > 1)
	{
		ft_middle(x, y);
		write(1, "\n", 1);
		ft_HandT(x, y);
	}
	write(1, "\n", 1);
}

void ft_HandT(int x, int y)
{
	int	reset;

	reset = x;
	while ( x > 0 || x < 0)
	{
			if ( x == reset)
				ft_putchar('A');
			else if (x == 1)
				ft_putchar('C');
			else
				ft_putchar('B');
			x--;
	}
}
void	ft_middle(int x, int y)
{
	int	reset;
	char c;

	c = 'B';
	reset = x;
	while ( y > 2)
		{
				write(1, "\nB", 2);
				while ( x > 2)
				{
					write (1, " ", 1);
					x--;
				}
				x = reset;
				if ( x > 1)
				{
				write(1, &c, 1);
				}
					;
			y--;
		}
}
int main()
{
	test(-12, -12);
}
