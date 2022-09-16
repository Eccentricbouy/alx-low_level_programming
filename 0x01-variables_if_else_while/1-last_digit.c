#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main
 *Return
 */
int main(void)
{
  int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  
