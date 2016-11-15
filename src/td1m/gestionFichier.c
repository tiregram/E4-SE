#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "gestionFichier.h"
#include <assert.h>
#include <unistd.h>

char* litDixCaracteres(int file)
{
  char* a  =  malloc(sizeof(char)*(10+1));
  int   nb =  read(file, a , 10);
  if(nb == -1) exit(-1);

  a[nb] = '\0';
  return a;
}


char* litLigne(int file)
{
 
  ssize_t nb_read;
  char* a = malloc(sizeof(char*)*(TAILLEBUF+1));
    for (int i = 0; i < TAILLEBUF; i++) {
      nb_read=read(file,a+i,1);

      if(nb_read==0)
        {
          return NULL;
        }

      if(a[i]=='\n')
        {
          break;
        }

    }
  return a;
}
