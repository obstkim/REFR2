#include <string.h>
#include <dirent.h>
#include <stdio.h>

DIR *d;
struct dirent *dir;

_Bool directories_open(char* pDir) {

  d = opendir(pDir);

  return 0;
}

_Bool directories_list(){
    while ((dir = readdir(d)) != NULL) {
	if(strcmp(dir->d_name,".")&&strcmp(dir->d_name,"..")){
          if(dir->d_type == DT_DIR){
          printf("Verzeichnis: %s\t\tGroesse: %d Bytes\n", dir->d_name,dir->d_off);
	  }
	}
    }
  return 0;
}

_Bool directories_close(){

   closedir(d);

   return 0;
}
