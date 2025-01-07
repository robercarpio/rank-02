#include <string.h>
#include <stdio.h>


int   ft_contains(const char *str,char c)
{
      int   b;

      b = 0;
      while (*str && b != 1)
      {
            if(*str == c)
                  b = 1;
            str++;
      }
      return(b);

}
size_t	ft_strspn(const char *s, const char *accept)
{
      int   count;

      count = 0;
      while(*s && ft_contains(accept,*s))
      {
            count++;
            s++;
      }
      return(count);
}

// int   main(int argc,char *argv[])
// {
//       if(argc == 3)
//             printf("%zu \n",ft_strspn(argv[1],argv[2]));
//             printf("%zu \n",strspn(argv[1],argv[2]));
//       return(0);
// }