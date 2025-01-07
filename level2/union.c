#include <unistd.h>

int	ft_contains(char *str, char c)
{
	int	b;

	b = 0;
	while(*str && b!=1)
	{
		if(*str == c)
			b = 1;
		str++;
	}
	return(b);
}

void	ft_union(char *str, char *reject)
{
	
}

int	main(int argc, char *argv[])
{
	if(argc == 3)
		ft_union(argv[1],argv[2]);
		write(1,"\n",1);
	return(0);
}