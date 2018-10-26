#include<stdio.h>
#include<dirent.h>
#include<string.h>

#include <sys/types.h> //DIR is specified in it.


DIR *dir;

int main(int argc, char *argv[])
{
	struct dirent *preaddir;

	if(argc != 2) {
		printf("Command is proper\n");
		return 0;
	}

	dir = opendir(argv[1]);

	if(dir == NULL) {
		printf("Cannot open the directory\n");
		return 0;
	}

	while((preaddir = readdir(dir)) != NULL) {
		printf("%s\n", preaddir->d_name);
	}

	closedir(dir);
	
	return 0;
}	
