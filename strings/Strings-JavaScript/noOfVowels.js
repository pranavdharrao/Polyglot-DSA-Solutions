let str = "Hello, world";

function countVowels(str){
    var count =0;
    let vowels = ["a", "e", "i", "o", "u"];
    for(let char of str.toLowerCase()){
        if(vowels.includes(char)){
            count++;
        }
    }
    return count;
}
console.log(countVowels(str));