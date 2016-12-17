function orbitalPeriod(arr) {
  var GM = 398600.4418;
  var earthRadius = 6367.4447;
  
  
  function calc(avgAlt) {
    var t = (2 * Math.PI) * Math.sqrt(((Math.pow((earthRadius+avgAlt),3)) / GM));
  return t;
  }
  answer = [];
  for(var i = 0; i < arr.length; i++) {
    var obj = {
      name: arr[i].name,
      orbitalPeriod: Math.round(calc(arr[i].avgAlt)),
    };
    answer.push(obj);
  }
  return answer;
}

orbitalPeriod([{name : "sputkin", avgAlt : 35873.5553}]);
