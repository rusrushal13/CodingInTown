function makeFriendlyDates(arr) {
  var newarr = [arr[0].split('-'), arr[1].split('-')];
  var now = new Date();
  var months = ["January", "February", "March", "April", "May", "June",
                "July", "August", "September", "October", "November", "December"];
  
  var first = new Date(0);
  first.setDate(Number.parseInt(newarr[0][2], 10));
  first.setMonth(Number.parseInt(newarr[0][1], 10) - 1);
  first.setYear(Number.parseInt(newarr[0][0], 10));
  
  
  var second = new Date(0);
  second.setDate(Number.parseInt(newarr[1][2], 10));
  second.setMonth(Number.parseInt(newarr[1][1], 10) - 1);
  second.setYear(Number.parseInt(newarr[1][0], 10));
  
  console.log(first + " " + second);
  
  var greater = second.valueOf() > first.valueOf();
  var withinOne = (second.valueOf() - first.valueOf()) < 31536000000;
  console.log((withinOne) ? "within" : "without");
  
  var result = [""];
  
  result[0] += months[first.getMonth()];
  result[0] += " " + ordinalize(first.getDate());
  
  if (!greater || 
      (now.getYear() != first.getYear() || 
      !withinOne)) {
    
    result[0] += ", " + (first.getYear() + 1900);
  }
  
  if (greater) {
    result.push("");
    
    if ((first.getMonth() != second.getMonth()) ||
        (first.getYear() != second.getYear())) {
      result[1] = months[second.getMonth()] + " ";
    }
    
    result[1] += ordinalize(second.getDate());
    
    if (!withinOne) {
      result[1] += ", " + (second.getYear() + 1900);
    }
    
  }
  
  console.log(result);
  
  console.log(second);
  
  return result;
}
      
function ordinalize(num) {
  if (num === 1) {
    return num + "st";
  } else if (num === 2) {
    return num + "nd";
  } else if (num === 3) {
    return num + "rd";
  } else {
    return num + "th";
  }
}



makeFriendlyDates(['2016-07-01', '2016-07-04']);