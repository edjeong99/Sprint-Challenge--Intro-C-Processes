#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  printf("argv[0] = %s\n", argv[0]);
  char *path;
  DIR *cur_dir;
  struct dirent * open_dir_point;

  // Parse command line
  
  if(argv[1]) path = argv[1] ;
  else path = ".";

  printf("Path = %s\n", path);

  // Open directory
  cur_dir = opendir(path);
  // if opendir failed, exit
  if(cur_dir == NULL){
    printf("Open returned NULL");
    exit(0);
  }


  // Repeatly read and print entries
  while(1){

    open_dir_point = readdir(cur_dir);
    if(open_dir_point == NULL) break;
    printf("%s\n",open_dir_point->d_name);

  }

  // Close directory
  closedir(cur_dir);
  return 0;
}