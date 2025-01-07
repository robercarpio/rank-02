#include <unistd.h>

int   ft_contains(char *str,char c)
{
      int   b;

      b = 0;

      while (*str && b != 1)
      {
            if (*str == c)
                  b = 1;
            str++;
      }
      return (b);
}

void  ft_inter(char *s1, char *s2)
{
      int   map[256] = {0};
      while(*s1)
      {
            if (ft_contains(s2,*s1))
            {
                  if(map[*s1]==0)
                  {
                        map[*s1] = 1;
                        write(1,&(*s1),1);
                  }
            }
            s1++;
      }
}

// int   main(int argc,char *argv[])
// {
//       if (argc == 3)
//             ft_inter(argv[1],argv[2]);
//       write(1,"\n",1);
//       return (0);
// }