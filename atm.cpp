//The cash machine will only accept the transaction if X is a multiple of 5
//For each successful withdrawal the bank charges 0.50 $US
//Calculate Pooja's account balance after an attempted transaction.


#include<bits/stdc++.h>
using namespace std;

int main()
{
    float cash,balance;
    cin>>cash>>balance;
    if(!((int)cash % 5) && ((balance) > cash + 0.5))
    {
        printf("%0.2f", balance - cash - 0.5);
        return 0;
    }
    cout<<balance<<endl;

    return 0;

}
