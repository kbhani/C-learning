function is_prime(n){
    if ( n % 2 == 0 && n > 2){
        return false;
    }
    for(let i = 2; i*i < n; i++) {
        if( n % i == 0 ){
            return false;
        }
    }
    return true;
}


function sumPrimes(num) {
  let sum = 0;
  let k = 0;
  while(sum <= num){
    if(is_prime(k)){
      sum = sum + k;
      k++;
    } 
  }
  return sum;
}

console.log(sumPrimes(10));