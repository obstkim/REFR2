#ifndef DIRECTORIES_LIST_H
#define DIRECTORIES_LIST_H

#include "directories_list.c"

#include <string.h>
#include <stdio.h>
#include <dirent.h>

int directories_open(char* pDir);
int directories_list();
int directories_close();

#endif
