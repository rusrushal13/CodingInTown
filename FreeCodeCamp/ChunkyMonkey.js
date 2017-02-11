
function chunkArrayInGroups(arr, size) {
  // lets do it :D
  var ary=[];
  while(arr.length){
    var len = arr.length;
    if(len>size){
      ary.push(arr.splice(0,size));
    }else if(len>0){
      ary.push(arr.splice(0,len));  
    }    
  }
  return ary;
}

chunkArrayInGroups(["a", "b", "c", "d"], 2);
