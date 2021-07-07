#include <iostream>
int gcd(int a, int b);
using namespace std;
struct hesabgar
{
    int soorat;
    char khatekasri={'/'};
    int makhraj;
};
int main()
{
  struct hesabgar first, second, result;
  char amalgar;
  int a,b, gcd1, temp;
  cin>>first.soorat;
  cin>>first.makhraj;
  cin>>second.soorat;
  cin>>second.makhraj;
  cin>>amalgar;
  switch (amalgar)
  {
  case '+': 
  result.soorat=(first.soorat*second.makhraj)+(first.makhraj*second.soorat);
  a=result.soorat;
  result.makhraj=(first.makhraj*second.makhraj);
  b=result.makhraj;
    gcd1=gcd(a,b);
    result.soorat=result.soorat/gcd1;
    result.makhraj=result.makhraj/gcd1;
  break;
  case '-':
  result.soorat=(first.soorat*second.makhraj)-(first.makhraj*second.soorat);
  a=result.soorat;
  result.makhraj=(first.makhraj*second.makhraj);
  b=result.makhraj;
    gcd1=gcd(a,b);
    result.soorat=result.soorat/gcd1;
    result.makhraj=result.makhraj/gcd1;
    if (result.soorat==0)
    {
        result.makhraj=(first.makhraj*second.makhraj);
    }
    
  break;
  case '*':
   result.soorat=(first.soorat*second.soorat);
  a=result.soorat;
  result.makhraj=(first.makhraj*second.makhraj);
  b=result.makhraj;
    gcd1=gcd(a,b);
    result.soorat=result.soorat/gcd1;
    result.makhraj=result.makhraj/gcd1;
   break;
  case '/':
   temp=second.makhraj;
   second.makhraj=second.soorat;
   second.soorat=temp;//swap
   result.soorat=(first.soorat*second.soorat);
  a=result.soorat;
  result.makhraj=(first.makhraj*second.makhraj);
  b=result.makhraj;
    gcd1=gcd(a,b);
    result.soorat=result.soorat/gcd1;
    result.makhraj=result.makhraj/gcd1;
   break;
  }
  cout<<result.soorat<<result.khatekasri<<result.makhraj<<endl;
  return 0;
}
int gcd(int a, int b)
{
  if (a>b)
  {
      if (b==0)
      {
          return a;
      }
      else
      {
         gcd(b,(a%b)) ;
      }  
  }
  else
  {
      if (a==0)
      {
          return b;
      }
      else
      {
          gcd(a,(b%a));
      }   
  }
}