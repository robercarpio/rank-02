#include <unistd.h>

void  ulstr(char *str)
{
      char  c;

      while(*str)
      {
            c = *str;
            if(*str >= 'a' && *str <= 'z')
                  c = *str-32;
            else if(*str >= 'A' && *str <= 'Z')
                  c = *str+32;
            write(1,&c,1);
            str++;
      }
}

int   main(int argc, char *argv[])
{
      if(argc == 2)
            ulstr(argv[1]);
      write(1,"\n",1);
      return(0);
}