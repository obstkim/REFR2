#ifndef DIRECTORIES_LIST_H
#define DIRECTORIES_LIST_H

#include "directories_list.c"

#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <dirent.h>

_Bool directories_open(char* pDir);
_Bool directories_list();
_Bool directories_close();

#endif
