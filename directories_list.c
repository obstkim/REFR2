#include <dirent.h> 
#include <stdio.h> 

int directories_open(char* pDir) {
  DIR *d;
  struct dirent *dir;
  d = opendir(pDir);

  if (d) {
    while ((dir = readdir(d)) != NULL) {
	if(dir[0] != '.'){
X
      printf("%s\n", dir->d_name);
}
else{}
    }
    closedir(d);
  }
  return(0);
}
