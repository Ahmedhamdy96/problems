// a programme to print a string reversed 
using System ; 
class programme
{
static void Main(string[] args)
{
  string word ;
  Console.WriteLine("Enter a word : ");
  word = Console.ReadLine(); 
  int L = word.Length;  
  int i ; 

  for(i=L-1 ; i>=0 ; i--)
  {
    Console.Write(word[i]); 
  }
  
}
}
