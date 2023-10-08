const arr = [1, 2, 3, 4, 5, 5, 6, 6];

console.log(removeDuplicates(arr));

//first approach- in-place method  
function removeDuplicates(arr){
    
    let i=0;
    while(i < arr.length){
        if(arr[i] === arr[i+1]){
            arr.pop();
        }
        else i++
    }
    return arr;
}

//second approach 
function removeDuplicates2(arr){
    
    uniqueElements = [];
    for(let i =0; i < arr.length; i++){
        if(uniqueElements.indexOf(arr[i]) === -1){      //it checks if the value arr[i] is not present in the uniqueElements array.
            uniqueElements.push(arr[i]);
        }
    }
    return uniqueElements;
}

console.log(removeDuplicates2(arr));

// third approach
function removeDuplicates3(arr){
    
    return [... new Set(arr)];
    //This part of the code creates a new Set object using the elements from the arr array.
    // spread operator (...) converts the Set back into an array. 
}
console.log(removeDuplicates3(arr));