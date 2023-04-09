// let a = "A health Cow is Good cow";
// let b = a.toLowerCase().split(" ").join("-");
// console.log(b);
//Fill in the urlSlug function so it converts a string title and returns the hyphenated version for the URL. You can use any of the methods covered in this section, and don't use replace. Here are the requirements:

//The input is a string with spaces and title-cased words

//The output is a string with the spaces between words replaced by a hyphen (-)

//The output should be all lower-cased letters

//The output should not have any spaces

function urlSlug(title) {
    title = title.toLowerCase();
    title = title.split(/\s+/);
    // if(title[0] == ""){
    //     title.shift();
    // }
    for(let i = 0; i < title.length; i++){
        if(title[0] == ""){
            title.shift();
        }
        // if(title[i] == "" && title[i+1] == ""){
        //     title.shift();    
        // }
    }
    
   //title = title.split(" ");
   title = title.join("-");
  return title;
}

console.log(urlSlug(" Winter is    Coming"));