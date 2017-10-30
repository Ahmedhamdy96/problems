// a programme to calculate the factorial 
using System ; 
class programme 
{
  static void Main(string[] args)
  {
  start : 
  int number ;
  int fact = 1 ;
  Console.WriteLine("Enter a number : ") ; 
  number = int.Parse(Console.ReadLine());
  if(number < 0 )
  {
    Console.WriteLine("Please Enter Positive number , Try Again ... ");
    goto start ; 
  }
  else
  { 
  for(int i = number ; i > 0 ; i --)
  {
      fact = fact *  i  ; 
  } 
  Console.WriteLine("Factorial {0} is {1} " , number ,fact);
  }
  }

}
