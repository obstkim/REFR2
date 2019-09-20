#include <string.h>
#include <dirent.h>
#include <stdio.h>

DIR *d;
struct dirent *dir;

int directories_open(char* pDir) {

  d = opendir(pDir);

  return 0;
}

int directories_list(){
    while ((dir = readdir(d)) != NULL) {
	if(strcmp(dir->d_name,".")&&strcmp(dir->d_name,"..")){
          if(dir->d_type == DT_DIR){
          printf("Verzeichnis: %s\t\tGroesse: %d\n", dir->d_name,dir->d_reclen);
	  }
	}
    }
  return 0;
}

int directories_close(){

   closedir(d);

   return 0;
}
