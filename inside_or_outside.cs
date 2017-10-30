//a programme to check if the point is inside or outside a circle 
// center is ( 0 , 0 ) 
using System ; 
class programme 
{
static void Main(string[] args)
{
  double r ; 
  double x ; 
  double y ; 
  double rs ; // radius squared  
  double z ; // the reference to judge 
  Console.WriteLine("Enter the radius of the circle : ");
  r = double.Parse(Console.ReadLine());
  Console.WriteLine("Enter the Point position in [ x - axis ]  :");
  x = double.Parse(Console.ReadLine());

  Console.WriteLine("Enter the Point position in [ y - axis ]  :");
  y = double.Parse(Console.ReadLine());

  rs = r * r ; 
  z = (x*x) + (y*y) ; 
  if(z<rs)
  {
      Console.WriteLine("Inside the circle !");
  } 
  else if (z==rs)
  {
      Console.WriteLine("On the circumference of the circle !"); 
  }
  else 
  {
      Console.WriteLine("Outside the circle ! "); 

  }

}
} 
