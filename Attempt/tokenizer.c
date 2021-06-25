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
  while(space_char(*str)){
    str++;
  }
  return str;
}

char *word_terminator(char *word){
  while(non_space_char(*word)){
    word++;
  }
  return word;
}

int count_words(char *str){
   wcount = 0;
  while(*str != '\0'){
    str = word_start(str);
    if(non_space_char(*str)){
      wcount++;
    }
    str = word_terminator(str);
  }
  return count;
}  

int str_length(char *str){
  int count;
  for(count = 0; *str != '\0'; str++){
    count++;
  }
  return count;
}

char *copy_str(char *inStr, short len){
  char *str_copy= (char*)malloc(sizeof(char)*len);
  int int=0;
  while (i < len){
    *str_copy = *inStr;
    str_copy++;
    inStr++;
    i++;
  }
  str_copy -=len;
  return str_copy;
}

char **tokenizer(char* str){
  int word_size =0;
   int i = 0;
   char *word_end;
   char *word_begin;

   char **tokens = (char**)malloc(sizeof(char*)*total_words);
   char *pointer = word_start(str);
   char **startAddress = tokens;
   while(i < total_words){
     word_begin = pointer;
     word_end = word_terminator(word_begin);
     pointer = word_end;
     word_size = word_end - word_begin;
     *tokens = copy_str(word_begin, word_size);
     tokens++;
     pointer = word_start(word_end);
     i++;
   }
   return startAddress;
}

void print_tokens(char **tokens){
  char ** startAddress = **tokens;
  while(*tokens){
    printf("\n%s", *tokens);
    tokens++;
  }
  tokens = startAddress;
}

void free_tokens(char **tokens{
    while(*tokens){
      free(*tokens);
      tokens**;
  }
  }
