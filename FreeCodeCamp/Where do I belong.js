
function getIndexToIns(arr, num) {
  // Find my place  :D.
  arr.sort(function(a,b){
    return a-b;
  });
  if(num<=arr[0]) return 0;
  if(num>arr[arr.length-1]) return arr.length;
  for(var i=0;i<arr.length-1;i++){
    if(num>arr[i]&&num<=arr[i+1])
      return i+1;
  }  
}

getIndexToIns([40, 60], 50);
