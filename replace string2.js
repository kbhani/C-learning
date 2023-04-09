//let before = "friend";
//let after = "ally";

function myReplace(str, before, after) {
    
    //let a = "Hello how are you my old friend gago pro noob";
    let mid = str.split(/\s/);
    //console.log(b.length);
    let cut = mid.slice(0,mid.indexOf(before));
    let afterCut = mid.slice(mid.indexOf(before)+1);
    cut.push(after);
    //console.log(cut);
    
    for(let i = 0; i < afterCut.length;i++){
        cut.push(afterCut[i]);
    }
    
    // cut = cut.join(" ");
    // console.log(cut);
    
    //maybe splice and add elements
    //console.log(cut);
    
        
      return cut.join(" ");
    }
    
    console.log(myReplace("A quick brown fox jumped over the lazy dog", "jumped", "leaped"));