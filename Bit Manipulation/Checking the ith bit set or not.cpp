
// checking the ith bit set or not

#include <iostream>
#include <math.h>
//#include <bit>
using namespace std;

int main(){
   int test;
   cin >> test;
   while(test--){
    int n,i;
    cin >> n >> i;
    int f = 1;
    f = f<<i;
    int res = n & f;
    if(res){
        cout << "true" << endl;
    }else{
       cout << "false" << endl;
    }
   }
}
