var a = [3,1];
var sum = 0;
if(a[0] < a[1]){
    let x = a[0];
    let b = x;
    let y = a[1];
    
    for(b;b<=y;b++){
       sum = sum + b; 
    }
}
else{
    let x = a[0];
    let b = x;
    let y = a[1];
    
    for(b;b>=y;b--){
        sum = sum + b;
    }
}
console.log(sum);
//console.log(a[1]+2);
// for(let i = a[0]; i < a[1]; i++){
//     a.splice(i+1,0,(a[i]+1));
//     console.log(a);
// }

//console.log(a);

// function sumAll(arr) {
//     var sum = 0;
//     if(arr[0] < arr[1]){
//       // let x = arr[0];
//       // let b = x;
//       // let y = arr[1];
      
//       for(arr[0];arr[0]<=arr[1];arr[0]++){
//          sum = sum + arr[0]; 
//       }
//       return sum;
//     }
//   else{
//       // let x = arr[0];
//       // let b = x;
//       // let y = arr[1];
      
//       for(arr[0];arr[0]>=arr[1];arr[0]--){
//           sum = sum + arr[0];
//       }
//     return sum;
//   }
//   }
  
//   sumAll([1, 4]);