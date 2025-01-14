#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin>> n;
	    string s;
	    cin >> s;
	    ll size=n;
	    string ans="";
	    ll i=size-1;
	    while(i>=0){
	        if(s[i]=='a' || s[i]=='e'){
	            if(ans==""){
	                ans.push_back(s[i]);
	                i-=1;
	                ans.push_back(s[i]);
	                i-=1;
	            }else{
	                ans.push_back('.');
	                ans.push_back(s[i]);
	                i-=1;
	                ans.push_back(s[i]);
	                i-=1;
	            }
	        }else{
	           if(ans==""){
    	            ans.push_back(s[i]);
    	           i-=1;
    	           ans.push_back(s[i]);
    	           i-=1;
    	           ans.push_back(s[i]);
    	           i-=1;
	           }else{
    	           ans.push_back('.');
    	           ans.push_back(s[i]);
    	           i-=1;
    	           ans.push_back(s[i]);
    	           i-=1;
    	           ans.push_back(s[i]);
    	           i-=1;
	            }
	        }
	    }
	    reverse(ans.begin(),ans.end());
	    cout<<ans<<endl;
	}
	return 0;

}
