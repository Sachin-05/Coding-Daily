
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector <int> primes;

bool isprime[90000001]; // yeh by default false honge as globally declare kiya hai modulo bhi le sakta hai re baba = 10^9+7;

void sieve(){
	int maxN =90000000;
	isprime[0]=isprime[1]=true;

	// true = not prime and false = prime

	for(int i=2; i*i<=maxN; ++i){
		if(isprime[i]==false){
			for(int j=i*i; j<=maxN; j+=i){
				isprime[j] = true;
			}
		}
	}

	for(int i=2; i<=maxN; ++i){
		if(isprime[i]==false){
			primes.push_back(i);
		}
	}

}

int main() {
	// your code goes here
	int tt;
	cin >> tt;
	sieve();
	while(tt--){
		int n;
		cin >> n;
		cout << primes[n-1] << endl;
	}
}
