#include <stdio.h>

int   ft_strlen(char *str)
{
      int   i;

      i = 0;
      while(*str)
      {
            i++;
            str++;
      }
      return (i);
}

char    *ft_strrev(char *str)
{
      char  aux;
      int   i;
      int   len;
      int   j;

      len = ft_strlen(str);
      j = len - 1;
      i = 0;
      
      while(i < len/2)
      {
            aux = str[i];
            str[i] = str[j];
            str[j] = aux;
            i++;
            j--;
      }
      return(str);
}

int   main(int argc, char *argv[])
{
      if(argc == 2)
            printf("%s \n",ft_strrev(argv[1]));
      return(0);
}