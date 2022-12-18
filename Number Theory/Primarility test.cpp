
// brute force whether prime or not

bool isprime(int n){

   if(n==2){
    return 1;
   }

   for(int i=2; i<n; ++i){
    if(n%i==0){
        return 0;
    }
   }
   return 1;
}


// now as time complexity in O(sqrt(n)


// primarility test in O(sqrt(n))

bool isprime(int n){
  if(n==2){
    return 1;
  }

  for(int i=2; i*i<n; ++i){
    if(n%i==0){
        return 0;
    }
  }
  return 1;
}
