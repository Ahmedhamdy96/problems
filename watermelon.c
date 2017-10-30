//http://codeforces.com/problemset/problem/4/A
#include <stdio.h>
int main(void)
{
    unsigned char w ; 
    scanf("%d",&w);
    if(w != 2){
    if(w%2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }
    else{
        printf("NO");
    }
    
return 0 ;    
}
