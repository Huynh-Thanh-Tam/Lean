
#include <iostream>
#include <cmath>
#include <stdbool.h>

using namespace std;


bool snt(int n)
{
  if(n < 2)
              // nếu n < 0 thì ko phải số nguyên tố
  return false;
  
  for(int i = 2; i*i <= n; i++) // diệt từ 2 đến căn bậc 3 của n
  {
    if(n % i == 0) // nếu n % hết cho i thì kết luận ko phải số nguyên tố
    
    return false;
  }
    return true; // ngược lại thì kết luận là số nguyên tố
}


void uotput(int n)
{
  while(n /= 10) // điều kiện lập chia lấy phần nguyên đến khi = 0 thì kết thúc
  {
    if(snt(n % 10) == true)  // gọi hàm kiểm tra số nguyên tố đặt đối số là các chữ số phần dư của n có phải số nguyên tố hay không
    {
      cout << n %10 << " "; // nếu là số nguyên tố thì xuất ra các chữ số dư đó 
    }
  }
}


int main()
{
  int n;
  
  do
  {
    cout << "input n: ";
    cin >> n;
    
  }while(n <= 0);
  
  output(n):
  
  return 0;
  
}