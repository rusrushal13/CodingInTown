
function bouncer(arr) {
  // Don't show a false ID to this bouncer.
  return arr.filter(function(val){
    return !!val;
  });
}

bouncer([7, "ate", "", false, 9]);
