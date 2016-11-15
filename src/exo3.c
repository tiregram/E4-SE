#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
  pid_t childpid_or_zero;
  char str[100];

  for (int i = 1; i <= 20; ++i) {

    childpid_or_zero = fork();

    if(childpid_or_zero == -1)
      {
        write(1,"/!\\ ERREUR fork",15);
        exit(1);
      }

    if(childpid_or_zero == 0)
      {
        sprintf(str,"I'm number %i, my PID is %i and my father is %i\n",i,getpid(),getppid());
        write(1,str,strlen(str));
      }
    else
      {
        wait(NULL);
        exit(1);
      }

  }


  return 0;
}
