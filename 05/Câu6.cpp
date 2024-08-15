void reverse(char *s) {
    // Your code goes here
    char *left = s;
    char *right = s;

    while(*right != '\0') {
        right++;
    }
    right--;

    while(right > left) {
        char temp = *right;
        *right = *left;
        *left = temp;
        left++;
        right--;
    }
}
