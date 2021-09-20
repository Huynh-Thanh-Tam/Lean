
#include <iostream>
#include <cmath>
#include <stdbool.h>

using namespace std;

// tìm và điếm số số lượng số nguyên tố
// trong mảng một chiều


void input(int m[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << "[" << i+1 << "] = ";
    cin >> m[i];
  }
}



void output(int m[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << m[i] << " ";
  } 
}


bool KTSNT(int n)
{
  if(n < 2)
  
  return false;
  
  for(int i = 2; i*i <= n; i++)
  {
    if(n % i == 0)
    
    return false;
  }
    return true;
}


int DSNT(int m[], int n)
{
   int diem = 0;
  for(int i = 0; i < n; i++)
  {
    if(KTSNT(m[i]) == true)
    {
      diem++;
    }
  }
     return diem;
}


void XSNT(int m[], int n)
{
  for(int i = 0; i < n; i++)
  {
    if(KTSNT(m[i]) == true)
    {
      cout << m[i] << " ";
    }
  }
}


int main()
{
  int n, m[10];
  
  cout << "\t\n Nhap So Luong Mang \n\n";
  
  do
  {
    cout << "input n: ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  cout << "\t\n Nhap Mang \n";
  
  input(m,n);
  
  cout << "\n\t Xuat Mang \n";
  
  output(m,n);
  
  cout << endl;
  
  cout << "Co " <<DSNT(m,n) << " SNT la : ";
  
  XSNT(m,n);
  
  return 0;
}
