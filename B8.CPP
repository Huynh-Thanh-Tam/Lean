
#include <iostream>
#include <cmath>

using namespace std;

// tính trung bình cộng 
// của các phần tử mảng một chiều

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


double TBC(int m[], int n)
{
  int tong = 0;
  double KQ = 0;
  
  for(int i = 0; i < n; i++)
  {
    tong += m[i];
  }
    KQ = (double) tong / n;
    
    return KQ;
}


int main()
{
  int n, m[10];
  
  cout << "\t Nhap So Luong Mang \n";
  
  do
  {
    cout << "input n: ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  cout << "\t\n Nhap Gia Tri mang \n";
  
  input(m,n);
  
  cout << "\t\n Xuat gia tri mang \n";
  
  output(m,n);
  
  cout << "\t\n TBC Cua mang la : ";
  
  cout << TBC(m,n);
  
  return 0;
}