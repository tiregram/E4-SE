
#include <assert.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "gestionFichier.h"



int main(int argc, char *argv[])
{
  int file = open("test.txt",O_RDONLY);

  char* test1;

  test1 = litDixCaracteres(file);
  printf(test1);
  free(test1);

  printf("||");
  test1 = litLigne(file);
  printf(test1);
  free(test1);

  close(file);
  return 0;
}
