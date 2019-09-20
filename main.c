#include "directories_list.h"


int main(int argc, char **argv){
	directories_open(argv[1]);
	directories_list();
	directories_close();
}
