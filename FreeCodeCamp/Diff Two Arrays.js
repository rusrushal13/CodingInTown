
function diffArray(arr1, arr2) {
  var newArr = [];
  newArr= arr1.concat(arr2).filter(function(val){
    return arr1.indexOf(val)===-1||arr2.indexOf(val)===-1;
  });
  // Same, same; but different.
  return newArr;
}

diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]);
diffArray([1, 2, 3, 5], [1, 2, 3, 4, 5]);
