function isPrime(n){
    if(n === 0 || n === 1){
        return false;
    }
    for(let i=2; i< n/2; i++){
        if(n % i === 0){
            return false;   //n is not a prime 
        }
    }
    return true;
}

console.log(isPrime(23));
console.log(isPrime(57));