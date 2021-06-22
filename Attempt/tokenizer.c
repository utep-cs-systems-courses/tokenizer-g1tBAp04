#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"

int space_char (char c){
  if(c == '\t' || c == ' '|| c == '\0'){
    return 1;
  }
  return 0;
}

int non_space_char (char c){
  if(c == '\t' || c == ' ' || c == '\0'){
    return 0;
  }
  return 1;
}

char word_start(char *str){
  while(non_space_char(*str)){
    str++;
  }
  return str;
}

char *word_terminator(char *word){
  while(*word != '/0' || *word != ' ' || *word != '\t'){
    word++;
  }
  return word;
}

int count_words(char *str){
  int wcount = 0;
  while(*str != '\0'){
    char *pointer = word_start(str);
    if(pointer != '\0'){
      wcount++;
    }
    word_terminator(pointer);
  }
}  

