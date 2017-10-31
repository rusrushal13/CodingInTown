function myReplace(str, before, after) {
  if (before[0] === before[0].toUpperCase()) {
    after = after[0].toUpperCase() + after.substring(1);
  } 
  
  else if (before[0] === before[0].toLowerCase()) {
    after = after[0].toLowerCase() + after.substring(1);
  }
  
  var array = str.split(' ');
 
  var removed = array.splice(array.indexOf(before), 1, after);
  var joined = array.join(' ');
  
  return joined; 
  //return str.replace(before, after);
}
myReplace("A quick brown fox jumped over the lazy dog", "jumped", "leaped");
