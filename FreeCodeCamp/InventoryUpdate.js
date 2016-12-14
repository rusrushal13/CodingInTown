
function updateInventory(arr1, arr2) {
    // All inventory must be accounted for or you're fired!.p
   var arr=[];
   var obj={};
    for(var i=0;i<arr1.length;i++){
      arr.push(arr1[i]);
    }
    for(var j=0;j<arr2.length;j++){
      arr.push(arr2[j]);
    }
    console.log(arr);
   for(var k=0;k<arr.length;k++){
     var cur = arr[k][1]; 
     console.log(obj[cur]);
     if(obj[cur]&&obj[cur][0]===cur){
       arr[obj[cur][1]][0]+=arr[k][0];
       arr.splice(k,1);
       k--;
     }else{       
       obj[cur]=[cur,k];     
    }
   }
   arr.sort(function(a,b){     
     return a[1].localeCompare(b[1]);
   });
    return arr;
}

// Example inventory lists
var curInv = [
    [21, "Bowling Ball"],
    [2, "Dirty Sock"],
    [1, "Hair Pin"],
    [5, "Microphone"]
];

var newInv = [
    [2, "Hair Pin"],
    [3, "Half-Eaten Apple"],
    [67, "Bowling Ball"],
    [7, "Toothpaste"]
];

updateInventory(curInv, newInv);
