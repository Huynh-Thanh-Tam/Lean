

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


// kiểm tra một số có phải là 
// số nguyên tố hay không

int KTSNT(int );



int KTSNT(int n )
{
  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n % i == 0)
       return 0;
  }
       return n > 1;
}


int main()
{
  int n;
  
  do
  {
    cout << "input n :";
    cin >> n;
    
  }while(n <= 0);
  
  if(KTSNT(n))
  {
    cout << "Yes";
  }
  else
  {
    cout << "NO";
  }
  
  return 0;
}