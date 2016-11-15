
#include "gestionFichier.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(void)
{

  int i = 0;

  char* test1;
  while(1)
    {
      test1 = litLigne(0);
      if (test1 == NULL)
        break;

      free(test1);
      i++;

    }
  printf("nbl:%i",i);



  return 0;
}

