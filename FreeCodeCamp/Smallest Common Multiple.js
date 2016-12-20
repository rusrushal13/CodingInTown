function smallestCommons(arr) {
  
  var start = Math.min(arr[0], arr[1]);
  var end = Math.max(arr[0], arr[1]);
  var array = [];
 
//get range of sequential numbers for finding LCM
  
   
   for (var i=start; i<=end; i++){
      array.push(i);
   }    
  
   return array.reduce(LCM);
//LCM funciton
  function LCM(a, b){
    return (a*b)/gcd(a,b);
   
    
  }
  function gcd(a,b){
    var t;
    while (b!=0){
      t = b;
      b=a % b;
      a = t;
    } return a;
  }
  
}
smallestCommons([1,5]);
