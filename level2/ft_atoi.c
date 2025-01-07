#include <stdio.h>

int   ft_atoi(char *str)
{
      int   i;
      int   n;
      int   sig;

      n = 0;
      i = 0;
      sig = 1;
      while(*str >= 9 && *str <= 13 || *str == '\t')
            i++;
      if (str[i] == '-' || str[i] == '+')
      {
            if (str[i]=='-')
                  sig = -1;
            i++;
      }
      while(str[i])
      {
            n = n*10+(str[i]-'0');
            i++;
      }
      return(n * sig);
}




