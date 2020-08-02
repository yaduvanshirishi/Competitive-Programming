//Sieve of Eratosthenes: https://bit.ly/2DaLuTK
//Time complexity
/*
for i -> 2 to NumberLimit/2
  if i is prime;
    for j -> i*2 to NumberLimit; j += i
      j is not prime

  limit (1/2 + 1/3 + 1/5 + 1/7+ 1/11 + .... + 1/NumberLimit) < log(NumberLimit)
  = O(log(log N))

*/

#include<bits/stdc++.h>
const int N = 1e5+5;
bool isPrime[N];

void show(int n)
{
  for(int i=2;i<n;i++)
  {
    if(isPrime[i])
    {
      std::cout<<i;
      std::cout<<"\n";
    }

  }
}

void sieve(int n)
{
  for (int i=2;i<=n/2;i++)
  {
    if(isPrime[i])
      for(int j = i*2; j<=n;j+=i)
        isPrime[j] = false;
  }
}
int main()
{
  int n;// n -> NumberLimit
  std::cin>>n;
  for(int i = 2;i<=n;i++) isPrime[i] = true;
  sieve(n);
  show(n);
  return 0;

}
