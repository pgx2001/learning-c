/*
 * TASK *
 * Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above.

 * OUTCOME *
 * Compiling with command `gcc -o experimenting_escape_sequence experimenting_escape_sequence.c`
 results: 
 `experimenting_escape_sequence.c:10:26: warning: unknown escape sequence '\c' [-Wunknown-escape-s equence] 10 |   printf("Experimenting:\cat\n"); | ^~ 1 warning generated.`
* Running the compiled binary prints `cat`
 */

#include <stdio.h>

int main(void) {
  printf("Experimenting: \cat\n");
  return 0;
}
