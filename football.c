//  http://codeforces.com/problemset/problem/96/A
#include <stdio.h>
#include <string.h>// strstr(s1 , s2) search for s2 in s1

int main(void)
{
  char players[100]  ;
  scanf("%s",players);
  if(strstr(  players , "1111111") || strstr(  players  , "0000000"))
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0 ; 
}
