
// counting the total number of set bits using right shift

#include <bits/stdc++.h>
using namespace std;

int main(){
  int tt;
  cin >> tt;
  while(tt--){
    int n;
    int res=0;
    cin >> n;
    // approach 1 using the right most shift bit
    /*
    int f= 1;
    while(n>0){
        if(n&f){
            res++;
        }
        n = n>>1;
    }
    cout << res << endl;
    */
    // approach 2 in o(logn) by simple observation
    while(n>0){
        res++;
        n = n&(n-1);
    }
    cout << res << "\n";
  }
}
