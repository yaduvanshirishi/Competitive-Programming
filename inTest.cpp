#include<iostream>
#include<cstdio>

int main()
{
    long long n, k;
    scanf("%lld %lld",&n,&k);
    long long count = 0;
    long long arr[n];
    for(int i=0;i<n;i++)
        scanf("%lld",&arr[i]);

    int i =0;
    while(n--)
    {
        if(arr[i++] % k == 0)
            count++;
    }

    printf("%lld\n",count);


}
