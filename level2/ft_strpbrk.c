#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
      int   b;
      int   i;
      b  = 0;
      while(*s1 && b !=1)
      {
            i = 0;
            while(s2[i] && b!=1)
            {
                  if(s2[i] == *s1)
                        b = 1;
                  i++;
            }
            if(b != 1)
                  s1++;
      }
	if(*s1 == '\0')
		return("(null)");
	return((char *)s1);
}

// int   main(int argc, char *argv[])
// {
//       if (argc == 3)
//       {
//             printf("%s \n",ft_strpbrk(argv[1],argv[2])); 
//             printf("%s \n",strpbrk(argv[1],argv[2]));
//       }
//       return (0);
// }
