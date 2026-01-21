#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

void Prompt(char hostname[], char* user, char* pwd)
{
    //for final version remove the parameters
    /* char hostname[256];
    char* user = getenv("USER");
    char* pwd = getenv("PWD");
    gethostname(hostname, sizeof(hostname));*/
    printf("%s@%s:%s> ",user, hostname, pwd);
    fflush(stdout);
}


int main()
{
    char hostname[256];
    char* user = getenv("USER");
    char* pwd = getenv("PWD");
    gethostname(hostname, sizeof(hostname));
    Prompt(hostname, user, pwd);
    char command[1024];
    fgets(command, sizeof(command),stdin); //dont need?
    
    return 0;
}
