#include <stdio.h>
#define STLEN 81
int main(void)
{
  char words[STLEN];
  puts("Enter a string, please.");
  fgets(words,STLEN,stdin);
 // gets(words);
  printf("Your string twice:\n");
  printf("%s\n", words);
  puts(words);
  puts("Done.");
  return 0;

}
