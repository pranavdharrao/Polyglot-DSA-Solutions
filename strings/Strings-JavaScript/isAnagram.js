function isAnagram(s, t){

    sortedS = s.toLowerCase().split('').sort().join('');
    sortedT = t.toLowerCase().split('').sort().join('');

    return (sortedS === sortedT);
}
console.log(isAnagram("silent", "listen"));
console.log(isAnagram("Anagram", "Nagaram"));