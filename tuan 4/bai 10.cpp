string toLower (string s) {
    string str = "";
    for (int i = 0 ; i < s.size() ; ++i) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            str += (s[i] + 32);
        }
        else str += s[i];
    }
    return str;
}