// agar aage biswas hai to hi match 'protik'   POSITIVE LOOKAHEAD
let sampleWord = "protik kumar biswas gago feeder curry";
let pwRegex = /protik(?=.*biswas)/; // Change this line
let result = sampleWord.match(pwRegex);
console.log(result[0]);

// agar aage gago hai to do not match 'protik'   NEGATIVE LOOKAHEAD
sampleWord = "protik kumar biswas gago feeder curry";
pwRegex = /protik(?!.*gago)/; // Change this line
result = sampleWord.match(pwRegex);
console.log(result);

