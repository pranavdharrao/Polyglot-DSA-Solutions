var myString = "sample, String";

//First basic approach 
function reverseString(s){
    const stringArray = s.split('');
    const reversedArray = stringArray.reverse();
    const reversedString = reversedArray.join('');

    return reversedString;
}
/* strings are immutable in JavaScript, meaning you cannot directly modify individual characters in a string.
Instead, you need to work with an array or some other mutable data structure to perform the reversal.*/


//Second Approach
function reverseString2(s){
    let reversed = "";
    for(i = s.length -1; i >=0; i--){
        reversed += s[i];
    }
    return reversed;
}
//Third approach using JS inbuilt functions
function reverseString3(s){
    
    return s.split('').reverse().join('');
}


console.log(reverseString(myString));
console.log(reverseString2(myString));
console.log(reverseString3(myString));
