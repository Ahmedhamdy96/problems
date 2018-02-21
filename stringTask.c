// http://codeforces.com/problemset/problem/118/A
// string task problem code-forces
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  char s[100];
  char vowel[] = { 'a' , 'e' , 'o' , 'u' , 'y' ,'i'};
  
  scanf("%s",s);
  // firsthly converting all chars to lower case 
  for(int i = 0 ; i <strlen(s); i++)
  {
    if(isupper(s[i]))
      s[i]=tolower(s[i]);
  }
  // ==========================================================
  // another solution in my opinion is to creat a counter and nested to loops 
  // if the couter == 0 >>> not in the vowels then print the character 
  for(int i = 0 ; i < strlen(s) ; i++)
  {
    if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
    { 
      printf(".%c",s[i]);
    } 
  }
 
  return 0 ; 
}
