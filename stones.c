// https://codeforces.com/problemset/problem/266/A   
// 266A.Stones on the Table 

#include<stdio.h>
int main(void)
{
	int n ;  
	scanf("%d",&n); 

	char colors[55] ; 
	scanf("%s",colors); 
	
	int counter = 0  ; 

	for(int i = 0 ; i<n ; i++)
	{
		if(colors[i]==colors[i+1])
		{
				counter++ ; 
	    }			
    }

	printf("%d\n" , counter ); 		
	return 0 ; 		
} 	
