
function sym(args) {
  var arg=[];
  for(var i=0;i<arguments.length;i++){
    arg.push(arguments[i]);
  }
  var arr=arg.reduce(function(a, b){
    c=a.filter(function(a1){
      return b.indexOf(a1)===-1;
    });
    d=b.filter(function(b1){
      return a.indexOf(b1)===-1;
    });
    console.log(c,d);
    return c.concat(d);
  });
   console.log(arr);
  arr=dif(arr);
  console.log(arr);
  return arr;
}
function dif(ary){
  var obj={};
  for(var i=0;i<ary.length;i++){
    var cur=ary[i];
    if(obj[cur]===cur){
      ary.splice(i,1);
      //console.log(ary[i]);
      i--;
    }else{
       
      obj[cur]=cur;
      
    }
  }
  obj=null;
 
  return ary;
}
dif([1,1,4,5,5]);
sym([1, 1, 2, 5], [2, 2, 3, 5], [3, 4, 5, 5]);
