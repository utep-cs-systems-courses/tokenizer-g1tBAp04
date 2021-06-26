#include "history.h"
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

List *init_history(){
  List *user_history = (List*)malloc(sizeof(Item));
}
void add_history (List *list, char *str){
  Item *node = list -> root;
  int id = 1;

  //new list
  if(node == NULL){
    list -> root = (Item*) malloc(sizeof (Item));
    list ->root->id;
    list -> root -> str = str;
    list -> root -> next = NULL;
  }
  //add list
  else{
    while(node->next != NULL){
      node = node->next;
      id++;
    }
 node -> next = (Item*) malloc(sizeof (Item));
    node ->next->id = id++;
    node -> next -> str = str;
    node -> next -> next = NULL;
  }
}
  
char *get history(List *list, int id){
  Item *node = list ->rppt;

  while(node != NULL){
    if(node -> id == id){
      return node -> str;
    }
    node-> node.next;
  }
  return "Not found.";
  }
}

void print_history(List *list){
  item *node = list->root;
  while(node != NULL){
    printf("\n%s", node ->str);
    node = node -> next;
  }
}

void free_history(List *list){
item *node = list->root;
  while(node != NULL){
    free(node);
    node = node -> next;
  }
  free(list);
}
 
