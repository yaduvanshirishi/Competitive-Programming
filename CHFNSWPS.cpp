#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr1[n];
	    int arr2[n];
	    for(int i=0;i<n;i++) cin>>arr1[i];
	    for(int i=0;i<n;i++) cin>>arr2[i];
	    unordered_map<int,int> um;
	    for(int i=0;i<n;i++){
	        if(um.find(arr1[i])==um.end()) um[arr1[i]] = 1;
	        else um[arr1[i]] +=1;
	    }
	    for(int i=0;i<n;i++){
	        if(um.find(arr2[i])==um.end()) um[arr2[i]] = 1;
	        else if(um[arr2[i]]>0) um[arr2[i]] -=1; 
	    }
	    int count = 0;
	    for(int i=0;i<n;i++){
	        if(um[arr1[i]]>0 && um[arr1[i]]%2!=0){
	            cout<<"-1"<<endl;
	            break;
	        }
	        else if(um[arr2[i]]>0 && um[arr2[i]]%2!=0){
	            cout<<"-1"<<endl;
	            break;
	        }
	        else if(um[arr1[i]]>0 && um[arr1[i]]%2==0){
	            count = count + um[arr1[i]]/2;
	            cout<<count<<endl;
	            break;
	        }
	        else if(um[arr1[i]]==0){
	            cout<<"0"<<endl;
	            break;
	        }
	        
	    }
	    
	    
	}
	return 0;
}
