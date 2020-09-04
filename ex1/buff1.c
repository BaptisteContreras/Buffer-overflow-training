#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
 
  volatile int modified;
  char buffer[10];  

  modified =41;
  gets(buffer);

  if(modified != 41) {
      printf("you have changed the 'modified' variable\n");
  } else {
      printf("Try again?\n");
  }
}
