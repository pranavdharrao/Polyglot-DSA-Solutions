
function reverseNumber(n){
    let reversed = 0;
    while(n > 0){
        let lastDigit = n%10;
        
        reversed = reversed *10 + lastDigit;
        n = Math.floor(n / 10);
    }
    return reversed;
}

console.log(reverseNumber(1234));

//another approach
function reverseNumber2(n){
    
    return Number(n.toString().split('').reverse().join(''));
}

console.log(reverseNumber2(1234));
