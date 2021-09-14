

#include<iostream>
#include<cstdlib> 
#include<cmath>
#include<stdbool.h>

using namespace std;

#define a 10

bool SCP(int );


bool SCP(int n)
{
  int scp = sqrt(n);
  
  for(int i = 1; i <= n; i++)
  {
   return (scp * scp == n) ? true : false;  
  }
}


int main()
{
  int n, m[a];
  int diem = 0;
  
  do
  {
    cout << "input SLM: ";
    cin >> n;
    
  }while(n < 1 || n > a);
  
  
  for(int i = 0; i < n; i++)
  {
    cout << "[" << i+1 << "] = ";
    cin >> m[i];
  }
  
  
  for(int i = 0; i < n; i++)
  {
    cout << m[i] << " ";
  }
     cout << endl;
     
  
  for(int i = 0; i < n; i++)
  {
    if(SCP(m[i]) == true)
       diem++;
  }
  
  cout << "Co :"<<diem<<" CSCP la: ";
  
  for(int i = 0; i < n; i++)
  {
    if(SCP(m[i]) == true)
    cout << m[i] << " ";
  }
  
  return 0;
  
}
