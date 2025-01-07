#include <unistd.h>

void  alpha_mirror(char *str)
{
      char  c;
      while (*str)
      {
            c = *str;
            if(*str >= 'a' && *str <= 'z')
                  c = 'z'-(*str-'a');
            else if(*str >= 'A' && *str <= 'Z')
                  c = 'Z'-(*str-'A');
            write(1,&c,1);
            str++;
      }
}

int   main(int argc, char *argv[])
{
      if (argc == 2)
            alpha_mirror(argv[1]);
      write(1,"\n",1);
      return(0);
}