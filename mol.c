#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>

const char * VERSION = "0.0.1";
const char * PROMPT = "mol> ";

int main() {
  printf("mol version %s\n", VERSION);
  puts("Perss CTRL-C to exit\n");

  while(1) {
    char * input = readline(PROMPT);
    add_history(input);
    printf("%s\n", input);
    free(input);
  }
  return 0;
}
