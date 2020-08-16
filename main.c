#include <stdio.h>
#include <unistd.h>

int		put_c(int n)
{
	char	c;

	if (n == 0)
		return 0;
	c = (n % 10) + '0';
	put_c(n / 10);
	write(1, &c, 1);
	return (0);
}

int		main()
{
	put_c(12345);
	return (0);
}
