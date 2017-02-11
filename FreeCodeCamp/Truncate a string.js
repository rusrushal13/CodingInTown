
function truncateString(str, num) {
  // Clear 
  if(num<=3) return str.slice(0,num)+"...";
  if(num<str.length) return str.slice(0,num-3)+"...";
  return str;
}

truncateString("A-tisket a-tasket A green and yellow basket", 11);
