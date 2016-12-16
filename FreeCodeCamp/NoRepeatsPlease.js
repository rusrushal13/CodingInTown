
function permAlone(str) {
  var arr = str.split("");
  var ary=[];
  var max=1;
  var obj={};
  var uniq=0,repeat=0;
  var pers=1;
  var sum=0,mul=1;
  for(var i=0;i<arr.length;i++){
    var cur=arr[i];   
    
    if(obj[cur]){
      obj[cur]++;
      
      max=max>obj[cur]?max:obj[cur];
      pers*=obj[cur];      
    }else{
      obj[cur]=1;     
    }
  }
  for(var key in obj){
    var m = str.length-obj[key];
    if(obj[key]===1) uniq++;    
    else {
      sum+=add(obj[key],m);      
       mul*=per(obj[key]);
       console.log(mul);
      repeat++;
    }
     
    }
   console.log(sum,mul,per(uniq),per(str.length),sum,mul*per(repeat));  
  var total=(per(str.length))-sum+(mul*per(repeat+uniq));
  console.log(total);
  console.log(per(str.length),pers,uniq,max,obj,repeat);
  if(2*max-str.length>1) return 0;
 if(repeat===1) return per(str.length)-pers*per(uniq+1);
  if(str.length===1) return 1;
   return total;
 
}
function add(a,b){
  if(a<=2) return per(a)*per(b)*(b+1);
  else return per(a)*per(b)*(b+1)+add(a-1,b+1);
}
function per(n){
  if(n>1){
    return n*per(n-1);
  }
  return 1;
}
permAlone("abfdefa");
