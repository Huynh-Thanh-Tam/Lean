

#include <iostream>
#include <cmath>

using namespace std;

// tim vị trí lớn nhất nhỏ nhất 
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


int max(int m[], int n)
{
  int ln = m[0];
  int vt = 0;
  
  for(int i = 0; i < n; i++)
  {
    if(m[i] > ln)
    {
      ln = m[i];
      vt = i;
    }
  }
     return vt + 1;
}


int min(int m[], int n)
{
  int nn = m[0];
  int vt = 0;
  
  for(int i = 0; i < n; i++)
  {
    if(m[i] < nn)
    {
      nn = m[i];
      vt = i;
    }
  }
     return vt + 1;
}


int main()
{
  int n, m[10];
  
  cout << "\t Tim vi tri max min :\n\n" <<endl;
  
  cout << "\t Nhap So Luong Mang :\n\n" <<endl;
  
  do
  {
    cout << "input n: ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  cout << "\t Nhap Gia Tri Mang \n"<<endl;
  
  input(m,n);
  
  cout << "\t\t\t\n Xuat Mang :\n\n" <<endl;
  
  output(m,n);
  
  cout << "\n gia tri max o vi tri : ";
  
  cout << max(m,n);
  
  cout << endl;
  
  cout << "\n gia tri min o vi tri : ";
  
  cout << min(m,n);
  
  return 0;
}