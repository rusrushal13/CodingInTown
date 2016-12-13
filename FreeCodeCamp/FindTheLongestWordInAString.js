function findLongestWord(str) {
 
	var strSplit = str.split(' '); 
	var longestWord = 0; 
    var i = 0; 
    var len = strSplit.length; 

  
	for(; i < len; i++){
		if(strSplit[i].length > longestWord){ 
		 longestWord = strSplit[i].length;
		}
	}

  
	return longestWord;
}

findLongestWord("The quick brown fox jumped over the lazy dog");
