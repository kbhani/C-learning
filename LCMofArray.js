
// function getLcm(first,second){
//     let max = (first > second) ? first : second;
//     while(true){
//         if(max % first == 0 && max % second == 0){
//             return max;
//         }
//         max++;
//     }   
//     return max;
// }

// function spread(arr){
//     if(arr[0]>arr[1]){
//         arr = arr.reverse();
//     }
//     let spreadArr = [];
//     for(let i = arr[0]; i <= arr[1]; i++){
//         spreadArr.push(i);
//     }
//     return spreadArr;
// }
// function lcmOfspreaded(array){
//     if(array[0] < 0 || array[1] < 0){
//         return "tum chutiya ho be";
//     }
//     let spreaded = spread(array);
//     console.log(spreaded);
//     let first,second;
//     let i = 0;
//     first = spreaded[0];
//     for(i; i < spreaded.length-1; i++){
//         second = spreaded[i+1];
//         first = getLcm(first,second);
//     }
//     return first;
// }

// console.log(lcmOfspreaded([23,18]));

//////////////////////////////////////////////////2nd VERSION///////////////////////////////////////////////////

// function getHCF(f,s){
//     if(f > s){
//         return getHCF(s,f);
//     }
//     if(s % f == 0){
//         return f;
//     }
//     else{
        
//         return getHCF(f,s%f);
//     }
// }

// function getLcm(first,second){
//     let hcf = getHCF(first,second);
//     console.log(hcf);
//     return (first*second)/hcf;
// }

// function spread(arr){
//     if(arr[0]>arr[1]){
//         arr = arr.reverse();
//     }
//     let spreadArr = [];
//     for(let i = arr[0]; i <= arr[1]; i++){
//         spreadArr.push(i);
//     }
//     return spreadArr;
// }

// function lcmOfspreaded(array){
//     if(array[0] < 0 || array[1] < 0){
//         return "sorry, negative numbers are invalid inputs";
//     }
//     let spreaded = spread(array);
//     console.log(spreaded);
//     let first,second;
//     let i = 0;
//     first = spreaded[0];
//     for(i; i < spreaded.length-1; i++){
//         second = spreaded[i+1];
//         first = getLcm(first,second);
//     }
//     return first;
// }

// console.log(lcmOfspreaded([23,18]));

