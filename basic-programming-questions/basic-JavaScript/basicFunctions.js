function checkArray(e){
    return Array.isArray(e);
}
// console.log(checkArray([]));
// console.log(checkArray({}));

//how to empty an array in JS? without using a loop or reassigning like arr = []
var arr = [1, 2, 3, 4, 5];
arr.length = 0;
//console.log(arr);   // output: []

//concat array
function duplicate(arr){
    
    return arr.concat(arr);
}
//console.log(duplicate([1,2,3,4,5]));

function reverseAlphabet(word){
    
    return word.split('').reverse().join('');
}
// console.log(reverseAlphabet("Example"));

function toUpperCase1(word){
    
    return word.charAt(0).toUpperCase() + word.substring(1);
}
// console.log(toUpperCase1("example"));

function capitalize(str){
    var allWords = str.split(' ').map(function(word){
        return word.charAt(0).toUpperCase() + word.substring(1);    
    })
    return allWords.join(" ");
}
// console.log(capitalize("take this as a sample string"));

var obj = {
    a: 1
}
//console.log(obj.a);     //1
//console.log(obj['a']);  //1

//console.log(obj.hasOwnProperty('a'));   //true

function occ(str){
    var occurrences = {};
    str.split('').forEach(function(element){
        if(occurrences.hasOwnProperty(element)){
            occurrences[element]++;
        }
        else{
            occurrences[element] = 1;
        }
    })
    return occurrences;
}
//console.log(occ('apple'));      //{ a: 1, p: 2, l: 1, e: 1 }

//  ToDo    //IMP


function fib(n){
    var t1 = 0;
    var t2 = 1;
    //var nextTerm = t1+t2;
    console.log(t1);
    console.log(t2);

    for(let i = 2; i < n; i++){
        let nextTerm = t1 + t2;
        console.log(nextTerm);

        t1 = t2;
        t2 = nextTerm;
    }
    return ;
    
}
fib(10);