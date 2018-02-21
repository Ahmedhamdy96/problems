// http://codeforces.com/problemset/problem/59/A

#include <stdio.h>
#include <string.h> // string handling library header file << prototype of strlen() which returns the length of a string
#include <ctype.h>  // character handling library header file  << prototype for isupper() , islower() , toupper() , tolower() 
int main(void)
{
  char s[100] ;
  int i ; 
  int lower = 0 ; 
  int upper = 0 ; 

  scanf("%100s",s);
  for(i=0 ; i < strlen(s) ; i++)
  {
    if(islower(s[i]))
        lower++ ;
    else if(isupper(s[i]))
        upper++ ;
  }
  if( lower == upper || lower>upper)
  {
    for(i=0 ; i < strlen(s); i++)
    {
      s[i] = tolower(s[i]) ; 
    }
  }
  else if(upper>lower)
  {
    for(i=0 ; i<strlen(s) ; i++)
    {
      s[i] = toupper(s[i]);
    }
  }
  printf("%s\n",s );
  //printf("is Lower : %d \n",lower );
  //printf("is Upper : %d \n",upper );
  return 0 ;  
}
