
#include <iostream>
#include <cmath>

using namespace std;

// Nhập va xuất mảng một chiều 


void input(int m[], int n)
{
  for(int i = 0; i <= n; i++)
  {
    cout << "["<< i+1 << "] = ";
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


int main()
{
  int n;
  int m[10];
  
  cout << "\tnhap So luong mang  \n\n";
  
  do
  {
    cout << "input : ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  cout << "\t Nhap Gia Tri cho mang \n\n: ";
  
  
  input(m,n);
  
  cout << "\t Xuat ra cac phan tu mang \n";
  
  output(m,n);
  
  return 0;
}