/**
  Given n pairs of parentheses, where n>=0, compute the number of posibilities
  of valid arrangement of them.  For example, when n=3, the possible
  arrangements are
    ()()(), (())(), ()(()), ((())), (()()),
  so the result will be 5.
 **/

#include <stdlib.h>
#include <stdio.h>

int brackets(int left, int right)
{
  if (left < 0) {
    return 0;
  }
  else if (left == 0 && right>0) {
    return 1;
  }
  else if (left == right) {
    return brackets(left-1, right);
  }
  else if (left < right) {
    return brackets(left-1, right) + brackets(left, right-1);
  }
  return 0;
}

int main()
{
  int n;
  for (n=0; n<=10; n++) {
    printf("number of solutions for n = %d : %d\n", n, brackets(n,n));
  }
}
