var Person = function(firstAndLast) {
  var name_arr = firstAndLast.split(' ');
  var first_name = name_arr[0];
  var last_name = name_arr[1];
  this.setFirstName = function(value) { first_name = value; };
  this.setLastName = function(value) { last_name = value; };
  this.setFullName = function(value) {
    var arr = value.split(' ');
    first_name = arr[0];
    last_name = arr[1];
  };
  this.getFirstName = function() { return first_name; };
  this.getLastName = function() { return last_name; };
  this.getFullName = function() { return first_name + " " + last_name; };
};


  

var bob = new Person('Bob Ross');
bob.getFullName();
