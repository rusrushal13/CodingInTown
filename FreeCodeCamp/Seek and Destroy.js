
function destroyer(arr) {
  // Remove all the values  
  args=Array.prototype.slice.call(arguments,1);
  return arr.filter(function(val){
    return args.indexOf(val)==-1;
  });
}

destroyer([1, 2, 3, 1, 2, 3], 2, 3);
