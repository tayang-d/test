#include <stdio.h>
#include <unistd.h>

int		main()
{
	char	*c;
	c = "abcde";
	printf("short : (%.3s)\n", c);
	printf("long : (%.8s)\n", c);
	printf("%.3p", &c);
	return (0);
}
