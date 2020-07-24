#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;// n -> number of chefs, m-> the number of emails
    cin>>n>>m;
    string chef,ctry;
    map<string, string> chefCountry;//< chef, chef's country>
    for(int i=0;i<n;i++)
    {
        cin>>chef>>ctry;
        chefCountry[chef] = ctry;

    }
    map<string, int> chefvotes;
    map<string, int> countryVotes;
    string maxChef, maxCountry;
    int maxChefVotes{}, maxCountryVotes{};
    for(int i=0;i<m;i++)
    {
        cin>>chef;
        chefvotes[chef]++;
        if(chefvotes[chef]>maxChefVotes)
        {
            maxChefVotes = chefvotes[chef];
            maxChef = chef;

        }
        else if(chefvotes[chef]==maxChefVotes){
            maxChef = min(chef,maxChef);

        }
        countryVotes[chefCountry[chef]]++;
        if(countryVotes[chefCountry[chef]]>maxCountryVotes)
        {
            maxCountryVotes = countryVotes[chefCountry[chef]];
            maxCountry = chefCountry[chef];

        }
        else if(countryVotes[chefCountry[chef]]==maxCountryVotes){
            maxCountry = min(maxCountry,chefCountry[chef]);

        }
    }
    cout<<maxCountry<<"\n";
    cout<<maxChef<<"\n";
}
