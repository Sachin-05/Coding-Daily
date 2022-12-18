
// prime numbers till n;

vector <int> isprime(int n){
   vector <int> loli(n,0);

   if(n<2){
    return loli;
   }

   vector <bool> sieve(n,true);
   // pehle sieve chart toh bna le dost

   for(int i=2; i*i<=n; ++i){
    for(int j=2; j*i<=n; ++j){
        sieve[i*j] = false;
    }
   }

   vector <int> res;

   for(int i=2; i<n; ++i){
    if(sieve[i]){
        res.push_back(i);
    }
   }
   return res;
}
