#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
  pid_t pidChild_or_0 ;

  printf("MY PID IS %i",getpid());

  char * str[100];
  sprintf((char*)str,"my PID is %i",getpid());
  write(1,str,strlen((char*)str));

  pidChild_or_0 = fork();

  sprintf((char*) str,
          "I am the %s and my pid is %i",
         (pidChild_or_0 == 0)?"CHILD":"PARENT ",
         getpid());
  write(1,str,strlen((char*)str));

  printf("");


  return 0;
}

