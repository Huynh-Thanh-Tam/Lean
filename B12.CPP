
#include <iostream>
#include <cmath>
#include <stdbool.h>


using namespace std;

// in va điếm các số chính phương 
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



bool KTSCP(int n)
{
  int can = sqrt(n);
  
  return (can * can == n) ? true : false;
}



void SCP(int m[], int n)
{
  for(int i = 0; i < n; i++)
  {
    if(KTSCP(m[i]) == true)
    
    cout << m[i] << " ";
  }
}



int DSCP(int m[], int n)
{
   int diem = 0;
    
  for(int i = 0; i < n; i++)
  {
    if(KTSCP(m[i]) == true)
    
    diem++;
  }
    return diem;
}


int main()
{
  int n, m[10];
  
  cout << "\t N So Luong Mang \n\n";
  
  do
  {
    cout << "input : ";
    cin >> n;
    
  }while(n <= 0 || n > 10);
  
  cout << "N Gia Tri Mang \n\n";
  
  input(m,n);
  
  cout << "Xuat Gia Tri Mang \n\n";
  
  output(m,n);
  
  cout << endl;
  
  cout << "Co : " <<DSCP(m,n) << " SCP La: ";
  
  SCP(m,n);
  
  return 0;
  
}
