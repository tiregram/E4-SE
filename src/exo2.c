#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char env_var_name[100];
  char* env_var;

  for (int i = 0; 1 ; i++)
    {
      sprintf(env_var_name,"RUN_%i",i);
      env_var = getenv(env_var_name);

      if(env_var == NULL)break;

      printf("%s is \"%s\"\n",env_var_name,env_var);

    }

  return 0;
}
