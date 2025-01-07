#include <unistd.h>

void  first_word(char *str)
{
      int   b;
      b = 1;
      while(*str && b == 1)
      {
            write(1,&(*str),1);
            if (*str == ' ')
                  b = 0;
            str++;
      }
}

int   main(int argc,char *argv[])
{
      if (argc == 2)
            first_word(argv[1]);
      write(1,"\n",1);
      return(0);
}