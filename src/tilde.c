#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

char* Tilde(const char * token)
{
    char* home = getenv("HOME");
    if (token[0] == '~')
    {
        if (token[1] == '\0')
        {
            return strdup(home);
        }
        else if(token[1] == '/')
        {
            size_t len = strlen(home) + strlen(token);
            char* expand = malloc(len+1); //+1 for the null terminator
            strcpy(expand, home);
            strcat(expand, token + 1);
            return expand;
        }
    }
    return strdup(token);
}
