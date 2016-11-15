
#include "gestionFichier.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{

  if (argc != 2) {
    printf("erreur no arg: %i",argc);
    return -1;
  }

  int file = open(argv[1],O_RDONLY);

  char* test1;
  test1 = litLigne(file);
  printf("%s\n",test1);
  free(test1);

  close(file);

  return 0;
}

