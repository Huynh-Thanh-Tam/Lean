

#include <iostream>
#include <cmath>
#include <stdbool.h>

using namespace std;

// kiểm tra các số hoàn thiện
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


bool KTSHT(int n)
{
   int s = 0;
   
  for(int i = 1; i <= n -1; i++)
  {
    if(n % i == 0)
      s = s + i;
  }
    return (s == n) ? true : false;
}


void SHT(int m[], int n)
{
  for(int i = 0; i < n; i++)
  {
    if(KTSHT(m[i]) == true)
    cout << m[i] << " ";
  }
}



int DSHT(int m[], int n)
{
   int diem = 0;
  for(int i = 0; i < n; i++)
  {
    if(KTSHT(m[i]) == true)
     diem ++;
  }
      return diem;
}



int main()
{
  int n, m[10];
  
  cout << "\t Nhap SL Phan Tu Mang \n\n";
  
  do
  {
    cout << "input n: ";
    cin >> n; 
    
  }while(n <= 0 || n > 10);
  
  cout << "\t Nhap Gia Tri Mang \n\n";
  
  input(m,n);
  
  cout << "\t Xuat Mang \n \n ";
  
  output(m,n);
  
  cout << endl;
  
  cout << "Co : " << DSHT(m,n) << " SHT la : ";
  
  SHT(m,n);
  
  return 0;
}




