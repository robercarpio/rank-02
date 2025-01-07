#include <unistd.h>
#include <stdlib.h>

int   ft_strlen(char *str)
{
      int   i;

      i = 0;
      while(str[i])
            i++;
      return(i);
}

int   us_count(char *str)
{
      int   count;

      count = 0;
      while(*str)
      {
            if (*str == '_')
                  count++;
            str++;
      }
      return (count);
}

void ft_putstr(char *str)
{
      while(*str)
      {
            write(1,&(*str),1);
            str++;
      }
}

char  to_upper(char c)
{
      char  r;

      r = c;
      if (r >='a' && r <='z')
            r -=32;
      return(r);
}

char  *snake_to_camel(char *str)
{
      int   len;
      char  *new;
      int   i;

      len = ft_strlen(str)-us_count(str);
      new = (char *)malloc(len+1);
      new[len] = '\0';
      i = 0;
      while(*str)
      {
            if(*str == '_')
            {
                  str++;
                  new[i] = to_upper(*str);
            }
            else
            {
                  new[i] = *str;
            }
            i++;
            str++;
      }
      return(new);
}

int   main(int argc, char *argv[])
{
      if(argc == 2)
            ft_putstr(snake_to_camel(argv[1]));
      write(1,"\n",1);
      return(0);
}