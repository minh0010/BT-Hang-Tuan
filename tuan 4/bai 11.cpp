string pigLatin(string word) {
    string s = "";
    if (word[0] == 'u' || word[0] == 'e' || word[0] == 'o' || word[0] == 'a' || word[0] == 'i') {
        s = word;
        s += "way";
    }
    else {
        for (int i = 1; i < word.size(); i++) {
            s += word[i];
        }
        s += word[0];
        s += "ay";
    }
    return s;
}