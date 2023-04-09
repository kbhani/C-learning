//function myReplace(str, before, after) {
  
  
    //let mid = str.split(/\s(?=\w)/);
    //console.log(mid);
    //let index = mid.indexOf(before);
    
    //console.log(index);
    //mid[index] = after;
    //console.log(mid);
  //if(mid[index][0] == before[0]){
    // console.log(mid[index][0]);
    // let cut = mid.slice(0,index);
    // console.log(cut);
    // let afterCut = mid.slice(index+1,);
    // cut.push(after);
    // for(let i = 0; i < afterCut.length; i++){
    //     cut.push(afterCut[i]);
    // }
    //cut = cut.join(" ");
    //return mid.join(" ");
  //} 
//   else {
//     after[0] = after[0].toUpperCase();
//     console.log(after,"else");
//     let cut = mid.slice(0,index);
//     let afterCut = mid.slice(index+1,);
//     cut.push(after);
//     for(let i = 0; i < afterCut.length; i++){
//         cut.push(afterCut[i]);
//     }
//     cut = cut.join(" ");
//     return cut;
//   }
//}
//console.log(myReplace("A quick brown fox Jumped over the lazy dog", "Jumped", "leaped"));

// ***************************2ND SOLUTION******************************* //
function checkCase(oneStr, twoStr){
  if(oneStr[0] == oneStr[0].toUpperCase()){
      let interTwo = twoStr.split(/(?=\w)/);
      interTwo[0] = interTwo[0].toUpperCase();
      let answer = interTwo.join("");
      return answer;
  } else {
      let inter = twoStr.split(/(?=\w)/);
      inter[0] = inter[0].toLowerCase();
      let ans = inter.join("");
      console.log("there");
      return ans;
  }
}
function myReplace(str, before, after) {
  let mid = str.split(/\s(?=\w)/);
  let index = mid.indexOf(before);
  mid[index] = checkCase(before, after);
  return mid.join(" ");
  
}
console.log(myReplace("A quick brown fox Jumped over the lazy dog", "Jumped", "leaped"));
//console.log(checkCase("Toy", "ball"));
