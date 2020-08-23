#include "ft_printf.h"
#include <unistd.h>

int		main()
{
	char	c;
	int		i;

	c = 'a';
	i = ft_printf("%c", c);
	c = i + '0';
	write(1, &c, 1);
	return (0);
}
