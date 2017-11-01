
// a method to calculate the biggest of two numbers , then use it to calculate the biggest of three numbers 
using System ; 
class programme
{
  static void Main(string[] args)
  {
    start : 
    int n1 ; 
    int n2 ; 
    int n3 ; 
    int b ; 
    Console.WriteLine("Enter Number one : ");
    n1 = int.Parse(Console.ReadLine());
    if(n1<0)
    {
      Console.WriteLine("Positive numbers only , Try Again .... ");
      goto start ; 
    }
    Console.WriteLine("Enter Number Two : ");
    n2 = int.Parse(Console.ReadLine());
    if(n2<0)
    {
      Console.WriteLine("Positive numbers only , Try Again .... ");
      goto start ; 
    }
    Console.WriteLine("Enter Number Three : ");
    n3 = int.Parse(Console.ReadLine());
    if(n3<0)
    {
      Console.WriteLine("Positive numbers only , Try Again .... ");
      goto start ; 
    }

      b=big_of(n1,n2);
      if(b<n3)
      {
        Console.WriteLine("{0} is the biggest of {1} {2} {3}" ,n3 , n1 , n2 ,n3 );
      }
      else
      {
        Console.WriteLine("{0} is the biggest of {1} {2} {3}" ,b, n1 , n2 ,n3);
      }
      
  }

  public static int big_of(int x , int y )
  {
    int big = 0 ; 
    if(x > y )
    {
      big = x ; 

    }
    else 
    {
      big = y ; 
    }
    return big ; 
  }

}
