#include <stdio.h>
#include <dirent.h>

enum {
  success=0,
  failed=1
};

int files_count_in_directory(const char *dirname) {
  return 0; 
}

int main(int argc, char *argv[]) {
  struct dirent *inputde;
  DIR *dr = opendir(".");

  if (dr == NULL) {
    printf("Directory to read files from not found");
    return failed;
  }

  const int *filescount = files_count_in_directory();
  const char *tracks[];
  while ((de = readdir(dr)) != NULL) {
    
  }

  closedir(dr);

  return success; 
}


