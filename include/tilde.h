#ifndef TILDE_H
#define TILDE_H

// This function expands the tilde to the entire path
// this functionn allocates memory for a string
// you must free up mem after usage or it will leak

char* tilde(const char *token);

#endif
