void rFilter(char *s) {
    // Your code goes here
    char *right = s;
    while(*right != '\0') {
        right++;
    }
    right--;

    while(!(('a' <= *right && 'z' >= *right) || ('A' <= *right && 'Z' >= *right))) {
        *right = '_';
        right--;
    }
}
