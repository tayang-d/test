#include <stdio.h>
#include <unistd.h>

int		main()
{
	char	*c;
	c = "abcde";
	printf("%-08s", c);
	return (0);
}
