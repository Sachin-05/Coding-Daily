//Codechef starters 42

#include <bits/stdc++.h>
using namespace std;

int solve(int n, string s){
         int cnt=0;
	    if(n==1 || n==2){
	        return 1;
	    }
	    for(int i=0; i<s.length()-1; ++i){
	        if(s[i]=='0' && s[i+1]=='1'){
	            cnt++;
	        }
	    }
	    if(s[0]=='1'){
	           cnt++;
	    }
	    if(s[n-2]=='0'){
	         cnt++;
	    }
	    return cnt;
}

int main() {
	// your code goes here
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int tt=1;
	cin >> tt;
	while(tt--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    cout << solve(n, s) << endl;
	}
	return 0;
}
