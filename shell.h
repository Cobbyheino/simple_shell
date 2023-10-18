#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>


int _strlen(char *);
int _strcmp(char *, char *);
char *_strcpy(char *, char *);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);
char *starts_with(const char *, const char *);
char *_strcat(char *, char *);

char **_strtok1(char *str, char d)
char **_strtok(char *str, char *d)

int interactive(info_t *);
int is_delim(char, char *);
int _isalpha(int);
int _atoi(char *);

#endif
