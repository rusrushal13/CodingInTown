
function translatePigLatin(str) {  
  console.log(str);
  if(["a","e","i","o","u"].indexOf(str[0])>-1){
    str =str+"way";console.log(str);
  }else{
    var reg =/[aeiou]/g;
    reg.test(str);
    var index =reg.lastIndex;
    var start=str.substr(0,index-1);
    var end=str.substr(index-1);
    str=end+start+"ay";console.log(str);
  }
  return str;
}

translatePigLatin("consonant");
translatePigLatin("challenge");
