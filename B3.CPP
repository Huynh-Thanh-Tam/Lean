

#include<iostream>
#include<cstdlib>
#include<cstdlib>
#include<cmath>

using namespace std;

// nếu bạn muốn sàn số nguyên tố
// không vượt quá n
// phải tạo một mảng có kích thước
// là n + 1 phần tử 

int a[1000001];


void San();


void San()
{
  // coi tất cả các phần tử từ 0 đến n
  // là số nguyên tố 
  // a[i] 1 == đúng
  // a[i] 2 == sai

  for(int i = 0; i <= 1000000; i++)
  {
    a[i] = 1;
  }
  
  // loại 0 va 1 
  
    a[0] = a[1] = 0;
    
    for(int i = 2; i <= 1000; i++)
    {
      // nếu i là số nguyên tố
      if(a[i])
      {
     // duyệt tất cả các bội của i
     // và cho nó ko phải là số nguyên tố
        for(int j = i*i; j <= 1000000; j+=i)
        {
          a[j] = 0; // j không còn
        }           // là số nguyên tố nữa
      }
    }
}


int main()
{
  int n;
  
  do
  {
    cout << "input n : ";
    cin >> n;
    
  }while(n <= 0);
  
  
  
  San();
  
  
  for(int i = 0; i <= n; i++)
  {
    if(a[i])
    {
      cout << i << " ";
    }
  }
  
  
  return 0;
}