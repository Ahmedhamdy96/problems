// a programme to print the numbers from 1 to n  which are not devisable by 3 and 7 
using System ; 
class programme  
{
  static void Main(string[] args)
  {
    start : 
    int number ; 
    Console.WriteLine("Enter a Number : ");
    number = int.Parse(Console.ReadLine());
    if(number<0)
    {
      Console.WriteLine("Please enter a Positive number , try again ... ");
      goto start ; 
    }
    else
    {
      for(int i = 1 ; i<=number ; i++)
      {
        if( (i%3 != 0) && (i%7 !=0) )
        {
          Console.WriteLine(i); 
        }
      }
    }
  }
}
