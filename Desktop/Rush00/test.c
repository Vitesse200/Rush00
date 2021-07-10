#include <unistd.h>

void	ft_HandT(int x, int y);
void	ft_middle(int x, int y);

void test(int x, int y)
{
	char	c;
	int reset;

	reset = x;
	c = 'B';
	ft_HandT(x, y);
	ft_middle(x, y);
	write(1, "\n", 1);
	ft_HandT(x, y);
}

void ft_HandT(int x, int y)
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
}
void	ft_middle(int x, int y)
{
	int	reset;
	char	c;

	c = 'B';
	reset = x;
	while ( y > 2)
		{
				write(1, "\nB", 2);
				x = reset;
				while ( x > 2)
				{
					write (1, " ", 1);
					x--;
				}
			
			
				while ( x > 2)
				{
					write(1, &c, 1);
					x--;
				}
			
			write(1, "B", 1);
			y--;
		}
}
int main()
{
	test(4, 5);
}
