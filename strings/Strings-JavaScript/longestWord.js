let sentence = "Find a longest word in this string";

function findLongestWord(sentence){   
    const words = sentence.split(" ");
    let longestWord = "";

    for (let word of words){
        if(longestWord.length < word.length){
            longestWord = word;
        }
    }
    return longestWord;
}
console.log(findLongestWord("I love to play volleyball"));

