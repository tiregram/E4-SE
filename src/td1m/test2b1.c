
#include "gestionFichier.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
  int file = open("test.txt",O_RDONLY);

  char* test1;
  test1 = litLigne(file);
  printf(test1);
  free(test1);

  close(file);

  return 0;
}

