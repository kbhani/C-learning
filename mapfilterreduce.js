let arr = [1,2,3,4,5,6,7,8,9,10]


let a = arr.filter((x) => {
    return x%2!=0;
}
).reduce((acc, curr) => {
    acc = acc + curr;
    return acc;
},0)
;



//let a = arr.reduce(sum)
console.log(a);