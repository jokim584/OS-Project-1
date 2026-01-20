#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

void Prompt(void)
{
    char hostname[256];
    char*user=getenv("USER");
    char*pwd=getenv("PWD");
    gethostname(hostname,sizeof(hostname));
    printf("%s@%s:%s> ",user, hostname, pwd);
    fflush(stdout);

}



int main()
{
    Prompt();
    char command[1024];
    fgets(command, sizeof(command),stdin);
    
    return 0;
}
