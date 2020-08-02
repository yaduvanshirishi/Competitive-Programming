#include<bits/stdc++.h>

const int N = 1e5;

int factors[N], expo[N], len;

void primeFact(int n)
{
  for(int i=2;i*i<=n;i++)
  {
    int k = 0;
    while(!(n % i))
    {
      k++;
      n /=i;
    }
    if(k > 0)
    {
      factors[len] = i;
      expo[len] = k;
      len++;
    }
  }
  //If a number is left for that case
  if(n > 1)
  {

    factors[len] = n;
    expo[len] = 1;
    len++;
  }
}
void show(int n)
{
  std::cout<<"Prime factors and Exponent for "<<n<<"\n";
  for(int i=0;i<len;i++)
  {
    std::cout<<factors[i]<<" "<<expo[i]<<"\n";
  }
}
int main()
{
  int t;std::cin>>t;
  while(t--)
  {
    memset(factors,0,sizeof(factors));
    memset(expo,0,sizeof(expo));
    len = 0;
    int n;std::cin>>n;
    primeFact(n);
    show(n);
  }
  return 0;
}
