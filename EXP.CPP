#include<iostream>
#include<cstdlib>
#include<cmath>
#include<stdbool.h>


using namespace std;

#define a 10

bool KTSNT(int n);

int max(int , int );

// division equal fundamental
// operation manipulate suctraction


bool KTSNT(int n)
{
  if(n < 2)
    return false;
  
  for(int i = 2 ; i <= sqrt(n); i++)
     {
       if(n % i == 0)
         return false;
     }
         return true;
}


// divesion equal fundamental 
// operation manipulate suctraction


int max(int m[], int n)
{
  int ln = m[0];
  
  for(int i = 0; i < n; i++)
  {
    ln = (m[i] > ln) ? m[i] : ln;
  }
     return ln;
}

// division equal fundamental
// operation manipulate suctraction


int main()
{
  int n, m[a];
  
  do
  {
    cout << "input SLM: ";
    cin >> n;
    
  }while(n < 1 || n > a);
  
  // division equal fundamental
  // operation manipulate sudtraction

  for(int i = 0; i < n; i++)
  {
    cout << "[" << i+1 << "] = ";
    cin >> m[i];
  }
  
  // division equal fundamental
  // operation manipulate suctraction

  cout << endl;
  
  int maxx = max(m,n) + 1;
  
  while(maxx++)
  {
    if(KTSNT(maxx) == true)
              break;
  }
  
  cout << "SNT = : " << maxx;
  
  return 0;
 
}

// đề tìm số nguyên tố nhỏ nhất 
// lớn hơn tất cả các giá trị trong 
// mảng một chiều




