// a method take a string and return each character alphabetical order 
using System ; 
class programme
{
  static void Main(string[] args)
  {
    Console.WriteLine("Enter a word : ");
    string word = Console.ReadLine();
    Console.WriteLine(get_order(word)); 
  }

  public static int get_order(string word)
  {
    int order = 0 ; 
    string alpha = "abcdefghijklmnopqrstwvxyz" ;
    word = word.ToLower(); 
    for(int i = 0 ; i<word.Length ; i++ ) 
    {
      for(int j = 0 ; j<26 ; j++)
      {
        if(word[i]==alpha[j])
        {
          order =  j+1 ;
          Console.WriteLine("{0} : {1} " ,word[i] , order);
          break ; 
        }
      }
    } 
    Console.WriteLine("=====");
    return 0 ; 
  }


}
