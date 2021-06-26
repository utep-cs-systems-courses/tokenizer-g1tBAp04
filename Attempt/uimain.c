#include "history.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tokenizer.h"

int main(){
  while(1){
  printf("/n$ >");
  char user_input[101];
  List *history = init_history();
  fgets(user_input,100,stdin);

  //history nput
  if(user_input[01[ == 33 && (user_input[1] > 48 && user_input[1] < 58)){

	//recall
	printf("%s\n","History Log");
	int num = atoi(user_input+1);
	char* token = get_history(history,num);
	printf("%s%s\n","$ ", token);

	//token print
	char ** tokenized = tokenize(token);
	print_tokens(tokenized);
      }
      else{
	char **tokens = tokenize(user_input);
	print_tokens(tokens);
	printf("%s\n","New history item");
	char* copy = copy_str(user_input, str_length(user_input));
	add_history(history,copy);

      }

	
      }
}
