function fact(n){
    if(n === 0 || n === 1){
        return 1;
    }
    let factorial = 1;
    for(let i=2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

console.log(fact(5));
console.log(fact(20));