#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;
	int	b;
	int	count;

	i = 0;
	b = 0;
	count =  0;
	while(s[i] && b !=1)
	{
		j = 0;
		while(reject[j] && b !=1)
		{
			if(s[i]==reject[j])
				b = 1;
			j++;
		}
		if(b !=1)
			count++;
		i++;
	}
	return(count);
}

// int	main(int argc,char *argv[])
// {
// 	if (argc == 3)
// 		printf("%zu \n",ft_strcspn(argv[1],argv[2]));
// 		printf("%zu \n",strcspn(argv[1],argv[2]));
// 	return(0);
// }