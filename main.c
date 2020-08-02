#include <stdio.h>
#include <unistd.h>

int		main()
{
	int		i;
	char	a[2];
	a[0] = 'a';
	a[1] = 'b';
	i = 0;
	if (i == 2 && a[i++])
		a[i] = 'c';
	printf("i : %d, a[0] = %c, a[1] = %c", i, a[0], a[1]);
	return (0);
}
