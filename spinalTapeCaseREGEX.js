// GOOD REGEX PROPERTIES QUIESTION
function spinalCase(str) {
    return str.split(/\s|_|(?=[A-Z])/)
      .join("-")
      .toLowerCase();
      ;
  }
  
  console.log(spinalCase('This Is Spinal Tap'));

  