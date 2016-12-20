function titleCase(str) {
  
  str = str.toLowerCase();
  
  
  str = str.split(" ");
  
  
  var i = 0;
  var len = str.length; 
  
  for (; i < len; i++) {
    str[i] = str[i].charAt(0).toUpperCase() + str[i].slice(1); 
    
  }
  
  
  return str.join(" ");
}
titleCase("I'm a little tea pot");
