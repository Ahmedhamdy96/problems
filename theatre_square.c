// http://codeforces.com/problemset/problem/1/A

#include <stdio.h>
int main(void)
{
	unsigned long long int m ; 
	unsigned long long int n ; 
	unsigned long long int a ;
	unsigned long long int x ; 
	unsigned long long int y ;
	

	scanf("%lld",&m);
	scanf("%lld",&n);
	scanf("%lld",&a);

	x = m / a ; 
	y = n / a ;

	while (1)
	{
		if((x*a)<m)
		{
			x = x + 1 ;
		}
		if((y*a)<n)
		{
			y = y +  1 ; 
		}
		break;
	} 
	printf("%lld",x*y);


	return 0;
}
