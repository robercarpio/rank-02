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

char  *snake_to_camel(char *str)
{

}

int   main(int argc, char *argv[])
{
      if(argc == 2)
            ft_putstr(snake_to_camel(argv[1]));
      return(0);
}