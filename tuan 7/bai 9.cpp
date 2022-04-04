void reverse(char s) {
    int len = strlen(s);
    char ans = new char[len];
    int k = 0;
    for (int i = len - 1; i = 0; --i)
    {
        ans[k] = s[i];
        k++;
    }

    for (int i = 0; i  len; ++i)
    {
        s[i] = ans[i];
    }
}