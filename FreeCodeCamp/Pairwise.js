function pairwise(arr, arg) {
  var result = 0;
  var copy = [];
  var seen_indicies = [];
  
  for(var i = 0; i < arr.length; i++) {
    copy.push(arr[i]);
  }
  
  for(var x = 0; x < arr.length; x++) {
    for(var y = 0; y < copy.length; y++) {
      if(x === y) { continue; }
      if(arr[x] + copy[y] === arg && seen_indicies.indexOf(x) === -1 && seen_indicies.indexOf(y) === -1) {
          result += x + y;
          seen_indicies.push(x, y);

      }
    }
  }
  
  
  
  return result;
}

pairwise([1,4,2,3,0,5], 7);
