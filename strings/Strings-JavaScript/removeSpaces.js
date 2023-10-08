const inputString = " Interview ,   question   ";
console.log(removeSpaces(inputString));

function removeSpaces(s){
    const result = s.replace(/\s/g, "");
    //using Regular Expression
    //the \s matches white space characters, including spaces, tabs, and line breaks,
    //the g flag is used to perform a global search and replace, replacing all occurrences

    return result;
}