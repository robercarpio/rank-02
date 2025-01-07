#include <stdio.h>

int		max(int* tab, unsigned int len)
{
      int   aux;
      int   i;

      i = 1;
      aux = tab[0];
      while (i<len)
      {
            if (aux<tab[i])
                  aux = tab[i];
            i++;     
      }
      return (aux);
}

// int   main(void)
// {
//       int   arr[] = {15,1,4,3,20,11,7};
//       printf("%d \n",max(arr,7));
//       return(0);
// }