void update(int* a, int* b) {
    int sum = *a + *b;
    int diff = *a - *b;
    diff = (diff > 0) ? diff : -diff;
    *a = sum;
    *b = diff;
}