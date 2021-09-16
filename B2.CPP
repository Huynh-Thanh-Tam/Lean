


// viết chương trình nhập vào một số bất kỳ
// và kiểm tra các số nguyên tố 
// từ 1 đến n xuất ra màn hình

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int KTSNT(int );


int KTSNT(int n)
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
    cout << "input n: ";
    cin >> n;
    
  }while(n < 0);
  
  cout << "\n\n\t Xuat Ca SNT 0 >> n" <<endl;
  cout << "\n\n" <<endl;
  
  cout << "Cac So Nguyen To La : ";
  
  for(int i = 0; i <= n; i++)
  {
    if(KTSNT(i))
    {
      cout << i << " ";
    }
  }
  
  return 0;
}