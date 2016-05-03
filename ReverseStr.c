char* reverseString(char* s) {
    char temp;
    for(int i = 0; i < strlen(s)/2; i++)
    {
        temp = s[i];
        s[i] = s[strlen(s)-i-1];
        s[strlen(s)-i-1] = temp;
    }
    return s;
}