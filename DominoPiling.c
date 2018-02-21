// http://codeforces.com/problemset/problem/50/A
// code-forces DominoPiling problem A50
#include <stdio.h>
int main(void)
{
  int m ; 
  int n ; 
  scanf("%d%d",&m,&n);
  int z = m*n/2 ; //area of board / area of each pice
  printf("%d\n", z);
  return 0 ; 
}
