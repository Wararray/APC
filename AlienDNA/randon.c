#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main ()
{
  srand (time(NULL));
  int random_number = rand() % 2 + 1;
  printf("%d\n", random_number);

  return 0;
}