#include <stdio.h>

void divide(int a, int b, int *q, int *r)
{
    *q = a / b;
    *r = a % b;
}

int main()
{
  int q, r;
  divide(17, 5, &q, &r);
  printf("\n %d %d", q, r);
}