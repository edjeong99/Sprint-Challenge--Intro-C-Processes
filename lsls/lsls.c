#include <stdio.h>
#include <dirent.h>

/**
 * Main
 */
int main(int argc, char **argv)
{
  char *path;
  DIR *cur_dir;
  // Parse command line
  
  if(argv[1]) path = argv[1] ;
  else path = argv[0];

  printf("Path = %s\n", path);

  // Open directory
  cur_dir = opendir(path);


  // Repeatly read and print entries

  // Close directory

  return 0;
}