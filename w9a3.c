#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int arg, char* argv[]){
  char* filename = "tf";
  int one, two, three;
  char buf[128];

  one = open(filename, O_RDWR);
  lseek(one , -5 ,SEEK_END);
  write(one, "Hello World", 5);

  /*Checkpoint 1*/
  lseek( one, 0, SEEK_CUR );
  two = open(filename, O_RDWR);
  read(two, buf, 5);
  three = dup(two);
  write( three, "Spring Break!", 5 ); 
  /*Checkpoint 2 */
  write(one,"Hello", 5);
  write(three ,"World", 5);

  /*Checkpoint 3*/
  close(one);
  close(two);
  close(three);

}