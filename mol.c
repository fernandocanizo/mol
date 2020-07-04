#include <stdio.h>

const char * VERSION = "0.0.1";
static char input[2048];


int main(int argv, char ** argc) {
  printf("mol version %s\n", VERSION);
  puts("Perss CTRL-C to exit\n");

  while(1) {
    fputs("mol> ", stdout);
    fgets(input, 2048, stdin);
    printf("%s", input);
  }
  return 0;
}
