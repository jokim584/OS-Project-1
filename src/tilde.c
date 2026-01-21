#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h> // haha josh forgot
char* tilde(const char * token)	
{
    char* home = getenv("HOME");	

    if (!home)	//Null check for home
    {	
	return strdup(token)
    }
	
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

// When implementing in main we must pass the argv[] into tilde as param
// But we must free the token before hand or it will cause a mem leak
