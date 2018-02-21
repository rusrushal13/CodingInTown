string Solution::findDigitsInBinary(int A) {
    string s;
    if(A == 0) s += to_string(0);
    while(A > 0){
        int d = A % 2;
        s += to_string(d);
        A /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

