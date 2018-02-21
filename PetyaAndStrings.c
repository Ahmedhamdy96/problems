// http://codeforces.com/problemset/problem/112/A
// A. Petya and Strings code-forces [[ 112A ]]  
#include <stdio.h>
#include <ctype.h> // toupper() tolower() isupper() islower() prototypes
#include <string.h> // strlen()    strcmp(s1,s2) comparison 
int main(void)
{
  char fistString[100] ; 
  char secondString[100] ;

  scanf("%s" ,fistString); 
  scanf("%s" ,secondString);
  // firstly concert them to the lower case 
  for(int i = 0 ; i<strlen(fistString) ; i++)
  {
    if(isupper(fistString[i]))
      fistString[i] = tolower(fistString[i]) ;
  }

  for(int i = 0 ; i<strlen(secondString) ; i++)
  {
    if(isupper(secondString[i]))
      secondString[i] = tolower(secondString[i]) ;
  }
  
  int c = strcmp(fistString , secondString) ; // this function compares the two strings  
  if(c==0)  // if the are the same 
    printf("0\n");
  else if(c<0) // s1<s2
    printf("-1\n");
  else
    printf("1\n");  // s1>s2
 

  return 0;
}
