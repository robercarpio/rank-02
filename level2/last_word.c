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

void  last_word(char *str)
{
      int   i;
      int   end;
      
      i = ft_strlen(str) -1;
      while(i>0 && str[i] == ' ' || str[i] == '\t')
            i--;
      end = i;
      while(i>=0 && str[i] != ' ' && str[i] != '\t')
            i--;
      i++;
      while(i<=end)
      {
            write(1,&(str[i]),1);
            i++;
      }
}

int   main(int argc, char *argv[])
{
      if(argc == 2)
            last_word(argv[1]);
      write(1,"\n",1);
      return(0);
}