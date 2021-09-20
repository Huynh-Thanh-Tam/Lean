

#include <iostream>
#include <cmath>

using namespace std;

// in ra các số chẵn lẻ
// và điếm số lượng chẳng lẻ
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


void SC(int m[], int n)
{
  int diem = 0;
  
  for(int i = 0; i < n; i++)
  {
    if(m[i] % 2 == 0)
    {
      diem++;
      cout << m[i] << " ";
    }
  }
     cout << " So Luong La : " <<diem;
}


void SL(int m[], int n)
{
  int diem = 0;
  
  for(int i = 0; i < n; i++)
  {
    if(m[i] % 2 != 0)
    {
      diem++;
      cout << m[i] << " ";
    }
  }
     cout << " So Luong La : " <<diem;
}


int main()
{
  int n, m[10];
  
  cout << "\t Nhap So Luong Mang\n \n";
  
  do
  {
    cout << "input n: ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  cout <<"\n\t Nhap Gia Tri MANG \n\n";
  
  input(m,n);
  
  cout <<"\n\t Xuat Gia Tri MANG \n\n";
  
  output(m,n);
  
  cout << endl;
  
  cout << "Cac So chan : ";
  
  SC(m,n);
  
  cout << endl;
  
  cout << "Cac So le : ";
  
  SL(m,n);
  
  return 0;
  
  
}