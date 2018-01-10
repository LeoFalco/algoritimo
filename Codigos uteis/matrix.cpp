#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) 
{ 
 srand(time(NULL));
  for(;;) printf("%d",rand()%2);
  return 0;
}