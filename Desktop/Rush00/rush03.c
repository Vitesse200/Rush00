/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaillar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:10:49 by lgaillar          #+#    #+#             */
/*   Updated: 2021/07/10 15:43:49 by lgaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y)
{
	int	reset;
	char	c;

	c = 'B';
	reset = x;	
	while ( x > 0 )
	{ 
			if ( x == reset)
			{
				c--;
				write(1, &c, 1);
				c++;
			}
			else if (x == 1)
			{
				c++;
				write(1, &c, 1);
				c--;
			}
			else
			{
				write(1, &c, 1);
			}
			x--;
	}
		while ( y > 2)
		{
			write(1, "\nB", 2);
			if (y > 2)
			{
				x = reset;
				while ( x > 2)
				{
					write (1, " ", 1);
					x--;
				}
			}
			else
			{
				while ( x > 2)
				{
					write(1, &c, 1);
					x--;
				}
			}
			write(1, "B", 1);
			y--;
		}
		x = reset;
		write(1, "\n", 1);
		while ( x > 0 )
	{
			if ( x == reset)
			{
				c--;
				write(1, &c, 1);
				c++;
			}
			else if (x == 1)
			{
				c++;
				write(1, &c, 1);
				c--;
			}
			else
			{
				write(1, &c, 1);
			}
			x--;
	}
}

int	main()
{
	rush(28, 5);
}
