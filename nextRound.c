
// http://codeforces.com/problemset/problem/158/A 
// Next Round Proplem in code forces 

#include<stdio.h>
int main(void)
{
  int n ; // number of players  
  int k ; // place 
  int score[50] ; // storing each one score   >>> given score < = 50  
  int counter = 0 ; // number in the next round

  scanf("%d%d",&n,&k);  // accept user input n and k 
  
  for(int i = 0 ; i<n ; i++)  // take n scores 
  {
    scanf("%d",&score[i]);

  }

  for(int i = 0 ; i<n ; i++)
  {

    if(score[i]>=score[k-1]&&score[i]>0) // the 3td place in the array == index 2 
      counter++ ;

  }

  printf("%d\n",counter );


  return 0 ; 
}
