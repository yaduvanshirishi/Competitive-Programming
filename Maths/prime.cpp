#include<iostream>

bool prime(int n)
{
  if(n <= 1)
    return false;
  if(n <= 3)
    return false;

  if((n%2==0) || (n%3==0))
    return false;
  int i = 5;
  while(i * i<=n)
  {
    if(n % i ==0) return false;
    i = i + 1;
  }
  return true;
}
int main()
{
  int n;std::cin>>n;
  int x = prime(n);
  if( x == false) std::cout<<"No";
  else std::cout<<"Yes";
  std::cout<<"\n";
  return 0;
}
