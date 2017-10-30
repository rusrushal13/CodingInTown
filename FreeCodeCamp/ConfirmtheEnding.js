
function confirmEnding(str, target) {
  
  // -- Falcor
  var res=str.substr(str.length-target.length,target.length);
  if(res==target) return true;
  return false;
}

confirmEnding("Bastian", "n");
