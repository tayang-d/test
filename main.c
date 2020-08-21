#include <stdio.h>
#include <unistd.h>

int		main()
{
	char	*c;
	c = "abcde";
	printf("short : %*s\n", 3, c);
	printf("long : %*s\n", 10, c);
	return (0);
}
