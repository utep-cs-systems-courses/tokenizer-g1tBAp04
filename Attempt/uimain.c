#include "history.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
  printf("/n$ >");
  char user_input[101];
  fgets(user_input,100,stdin);

  // tests space/nonspace char

  printf("%d\n",j);

  //testing function word start

  char* start = word_start(user_input);
  printf("\n%s", "Word start: \n");
  printf("%c\n", *start);)
  
  testing function word terminator
  char* end = word_terminator(start);
  printf("%c\n",end);
}
