//Chef vs Doof
////------------------
//Dr Doof has decided to destroy all even numbers from the universe using his Evil-Destroy-inator.
//Chef has N integers with him
//To stop Doof, Chef has to find an odd number which is an integer multiple of all N numbers
//-that he has with him
//find if there exists an odd number which is an integer multiple of all the given N numbers.
//If yes, print "YES", otherwise "NO".
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        //2 4 6 8
        //3 6 9
        int n,flag = 0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        int odd = arr[0];
        if(odd!=1)
        for(int i=1;i<n;i++)
        {
            if(odd % 2 == 0 && odd!=1)
            {
                flag = 1;//Not found
                break;
            }
            else{
                if(arr[i] % odd != 0)
                {
                    flag = 1;
                    break;
                }

            }
        }
        if(flag == 0 && odd != 1) cout<<"YES";
        else cout<<"NO";
             cout<<"\n";
    }
    return 0;
}
