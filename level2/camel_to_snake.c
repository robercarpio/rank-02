#include <unistd.h>
#include <stdlib.h>

char	to_lower(char c)
{
	char	r;

	r = c;
	if(r >='A' && r <= 'Z')
		r = r+32;
	return(r);
	
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1,&(*str),1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str)
	{
		i++;
		str++;
	}
	return(i);
}

int	mayus_count(char *str)
{
	int	i;

	i = 0;
	while(*str)
	{
		if(*str >= 'A' && *str <='Z')
			i++;
		str++;
	}
	return(i);
}


char	*camel_to_snake(char *str)
{
	char	*new;
	int	len;
	int	i;

	i = 0;
	len  = mayus_count(str) + ft_strlen(str);
	new = (char *)malloc(len);
	if(!new)
		return(NULL);
	new[len] = '\0';
	while(*str)
	{
		if(*str >='A' && *str <='Z')
		{
			new[i]='_';
			i++;
		}
		new[i] = to_lower(*str);
		i++;
		str++;
	}
	return(new);
}

int	main(int argc, char *argv[])
{
	if(argc == 2)
		ft_putstr(camel_to_snake(argv[1]));
	write(1,"\n",1);
	return(0);
}