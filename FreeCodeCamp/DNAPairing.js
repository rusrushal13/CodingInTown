function pairElement(str) {
  var dna = [];

  var pairing = function(char) {
    switch (char) {
      case 'A':
        dna.push(['A', 'T']);
        break;
      case 'T':
        dna.push(['T', 'A']);
        break;
      case 'C':
        dna.push(['C', 'G']);
        break;
      case 'G':
        dna.push(['G', 'C']);
        break;
    }
  };

  for (var i = 0; i < str.length; i++) {
    pairing(str[i]);
  }

  return dna;
}

pairElement("GCG");
