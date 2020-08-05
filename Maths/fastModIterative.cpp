/*
Fast Modulo Exponentiation
--------------------------

a^n % MOD  { 1 <= a <= 10^9, 1 <= n <= 10^8
MOD = 1000000009
Brute Force O(n)

int ans = 1;
for (int i = 1;i <=m; i++)
  ans = (1LL * ans * a)% MOD;

Using Fast Modular Exponentiation - O(log n)
(Divide and Conquer)
a^n ------->(n = even) ----> (a^(n/2))^2
\
 \
 (n = odd)
  \
   \
    a* a^(n-1)
*/

#include<iostream>

const int MOD = 1e9 + 7; //for overflow

int fastMod(int a,long long n)
{
  int prod = 1;
  if(n == 0) return 1;
  while(n)
  {

    if(n & 1)
    {
      prod = (1LL*prod * a) % MOD;
      n = n - 1;
    }
    else
    {
      a = (1LL*a * a) % MOD;
      n = n /2;
    }

  }
  return prod;
}
int main()
{
  int a,n;
  std::cin>>a>>n;
  std::cout<<fastMod(a,n)<<"\n";
  return 0;
}
