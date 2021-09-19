
#include <iostream>
#include <cmath>

using namespace std;

// tìm vị trí max min trong mảng một chiều

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


int max(int m[], int n)
{
  int ln = m[0];
  
  for(int i = 0; i < n; i++)
  {
    ln = (m[i] > ln) ? m[i] : ln;
  }
     return ln;
}





int min(int m[], int n)
{
  int nn = m[0];
  
  for(int i = 0; i < n; i++)
  {
    nn = (m[i] < nn) ? m[i] : nn;
  }
    return nn;
}



int main()
{
  int n;
  int m[10];
  
  cout << "\t Nhap So Luong Mang \n";
  
  do
  {
    cout << "input n: ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  
  cout <<"\t Nhap Gia Tri Mang \n";
  
  input(m,n);
  
  cout <<"\t Xuat Gia Tri Mang \n";
  
  output(m,n);
  
  cout << endl;
  
  cout <<"\t Max Cua Mang \n";

  cout << max(m,n) << endl;
  
  cout <<"\t Min Cua Mang \n";
  
  cout << min(m,n) << endl;
  
  return 0;
  
}