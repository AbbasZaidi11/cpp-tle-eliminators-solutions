#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin>> t;
	while(t--){
	    ll n,k;
	    cin >> n >> k;
	    vector<ll>vec(n+1,0);
	    ll i=k;
	    ll count=1;
	    while(i<=n){
	        vec[i]=count;
	        count+=1;
	        i+=k;
	    }
	    i=1;
	    while(i<=n){
	        if(vec[i]==0){
	            vec[i]=count;
	            count++;
	        }
	        i++;
	    }
	    for(auto a:vec){
	        if(a==0){continue;}
	        cout<<a<<" ";
	    }
	    cout<<endl;
	    
	}
	return 0;
}
