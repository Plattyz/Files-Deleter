#include <stdio.h>
#include <stdlib.h>
char a;
int main(void){
  printf("Are you sure you want to delete EVERY empty files? (Press enter if yes)");
  scanf("%c", &a);
  system("find . -type f -empty -delete");
  exit(0);
}
