#include <unistd.h>

void  repeat_alpha(char c)
{
      int   len;
      int   i;

      len = 0;
      i = 0;
      if (c >= 'a' && c <= 'z')
            len = c - 'a' +1;
      else if (c >= 'A' && c <= 'Z')
            len = c - 'A' +1;
      if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
      {
            while (i<len)
            {
                  write(1,&c,1);
                  i++;
            }
      }
      else
            write(1,&c,1);
      
}

int   main(int argc, char *argv[])
{
      if (argc == 2)
      {
            while(*argv[1])
            {
                  repeat_alpha(*argv[1]);
                  argv[1]++;
            }
      }
      write(1,"\n",1);
      return(0);
}