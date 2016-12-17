
function slasher(arr, howMany) {
  
  if(howMany>arr.length){
    return [];
  }else if(howMany>0){
    return arr.slice(howMany);
    
  }else{
    return arr;
  }
  
}

slasher([1, 2, 3], 2);
