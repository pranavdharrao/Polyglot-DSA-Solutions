let str = "Just trying to build a programming logic";

var savedStr = str.split(' ').map(function(word){
    return word.split('').reverse().join('');
})
//console.log(savedStr);

console.log(savedStr.join(' '));
console.log(savedStr.reverse().join(' '));
