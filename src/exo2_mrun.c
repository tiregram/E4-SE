#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

// call cmd
 void mycall(char * cmd, char *argv[])
 {
   pid_t childpid_or_0;
   childpid_or_0 = fork();

   // Erreur Code
   if(childpid_or_0 == -1)
     {
       printf("/!\\  ERREUR FORK \n");
       exit(-1);
     }

   // start child process
   if(childpid_or_0 == 0)
     {
       execvp(cmd,argv);
       exit(0);
     }
   // end child process

   // wait child
   wait(NULL);

 }


int main(int argc, char *argv[])
{

  char env_var_name[100];
  char* env_var;

  for (int i = 0; 1 ; i++)
    {
      sprintf(env_var_name,"RUN_%i",i);
      env_var = getenv(env_var_name);

      if(env_var == NULL)break;

      mycall(env_var,argv);

    }

  return 0;
}
