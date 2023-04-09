let sum = 1;
function sumFibs(numb){
  let n1 = 0, n2 = 1, nextTerm;
  nextTerm = n1 + n2;
  while (nextTerm <= numb) {
    // console.log(nextTerm);
    if(nextTerm % 2 != 0){
      sum = sum + nextTerm;
    }
    n1 = n2;
    n2 = nextTerm;
    nextTerm = n1 + n2;
    
}
  return sum;

}

console.log(sumFibs(4000000));