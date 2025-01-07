#include <unistd.h>

int   ft_strlen(char *str)
{
      int   i;

      i = 0;
      while(*str)
      {
            i++;
            str++;
      }
      return(i);
}

void  rev_print(char *str)
{
      int   len;
      int   i;

      i = 0;
      len = ft_strlen(str)-1;

      while(0<=len)
      {
            write(1,&(str[len]),1);
            len--;
      }

}

int   main(int argc, char *argv[])
{
      if (argc == 2)
            rev_print(argv[1]);
      write(1,"\n",1);
      return(0);
}