function pairElement(str) {
    let one = ["A", "T"];
    let two = ["C", "G"];
    let final = [];
    for(let i = 0; i < str.length; i++){
      //console.log();
      if(str[i] == one[0] || str[i] == one[1]){
        final.push(swap(one));
        return final;
      } else {
        final.push(swap(two));
        return final;
      }
    }
    
  }
  
  function swap(string){
      let arr = [];
      arr.push(string[1]);
      arr.push(string[0]);
      return arr;
  }
  
  
  console.log(pairElement("ATCGT"));
   
  
  