let str = "palindrome";
let str2 = "racecar";

function checkPalindrome(str){
    let s =0, e = str.length -1;
    while(s < e){
        if(str[s] !== str[e]){
            return false;
        }
        else{
            s++,e--;
        }
    }
    return true;
}

//another approach
function checkPalindrome2(str){
    let reversedStr = str.split('').reverse().join('');
    if(str === reversedStr){
        return true;
    }
    return false;
}

console.log(checkPalindrome(str));
console.log(checkPalindrome2(str));
console.log(checkPalindrome(str2));
console.log(checkPalindrome2(str2));

