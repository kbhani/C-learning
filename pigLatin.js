// function spinalCase(str) {
//   let ans = str.split(/\s|_|(?=[A-Z])/);
//   ans = ans.join("-");
//   ans = ans.toLowerCase();
  
   
//   //.join("-").toLowerCase();
//   return ans;
// }

// console.log(spinalCase("ThIs_Is_Spinal Tap"));



// let a = "protik kumar biswas gago";
// let regex = /protik(?=biswas)/

function translatePigLatin(str) {
  let ans = str;
  let vowels = /^[aeiou]/;
  if(vowels.test(ans)){
    return ans.concat("way");
   } else {
       let firstChar = ans.match(/^([^aeiouAEIOU]*)/);  //[^aeiouAEIOU]
       //console.log(firstChar[0].length);
       ans = ans.split(/(?=[a-z])/);
       for(let i = 0; i < firstChar[0].length; i++){
        ans.shift();
       }
       ans.push(firstChar[0]);
       ans = ans.join('');
       return ans.concat("ay");
   }
}

console.log(translatePigLatin("glove"));

