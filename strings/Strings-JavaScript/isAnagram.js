function isAnagram(s, t){

    sortedS = s.toLowerCase().split('').sort().join('');
    sortedT = t.toLowerCase().split('').sort().join('');

    return (sortedS === sortedT);
}
console.log(isAnagram("silent", "listen"));
console.log(isAnagram("Anagram", "Nagaram"));

//better Approach
function isAnagram(str1, str2){
    if(str1.length != str2.length){
        return false;
    }
    let strObj = {};
    for(ch of str1){
        strObj[ch] = (strObj[ch] || 0) + 1; 
    }
    for(ch of str2){
        if(!strObj[ch]){
            return false;
        }
        strObj[ch]--;
    }
    return true;
}

console.log(isAnagram("listen", "silent"));

//optimized approach 
function isAnagram(str1, str2) {
    if (str1.length !== str2.length) {
        return false;
    }
    const charCount = new Array(26).fill(0);        

    for (let i = 0; i < str1.length; i++) {
        charCount[str1.charCodeAt(i) - 'a'.charCodeAt(0)]++;
        charCount[str2.charCodeAt(i) - 'a'.charCodeAt(0)]--;
    }
    for (let count of charCount) {
        if (count !== 0) {
            return false;
        }
    }
    return true;
}
console.log(isAnagram("listen", "silent")); // true
console.log(isAnagram("hello", "world")); // false
