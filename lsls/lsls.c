#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  // printf("argv[0] = %s\n", argv[0]);
  char *path;
  char file_path[100] = "";
  DIR *cur_dir;
  struct dirent * open_dir_point;
  struct stat buf;

  // Parse command line
  
  // if there is an argument, use that as path
  // if not, use current directory as path
  if(argv[1]) path = argv[1] ;
  else path = ".";

  // printf("Path = %s\n", path);

  // Open directory
  cur_dir = opendir(path);
  // if opendir failed, exit
  if(cur_dir == NULL){
    printf("Open returned NULL");
    exit(0);
  }


  // Repeatly read and print entries
  while(1){
    // read top item in the directory and move to next item
    open_dir_point = readdir(cur_dir);
    if(open_dir_point == NULL) break;

    // get current item's path + name
     strcpy(file_path, path);
    strcat(file_path, "/");
    strcat(file_path, open_dir_point->d_name);
    // printf("file_path = %s\n", file_path);
    
    // get size of current item
     stat(file_path, &buf);

     printf("  %lld  %s\n", buf.st_size, open_dir_point->d_name);

  }

  // Close directory
  closedir(cur_dir);
  return 0;
}