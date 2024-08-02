bool is_prime(int n) {
    if (n<2) {
        return false;
    } else {
        for (int i = 2; i*i<=n; i++) {
            if (n%i==0) {
                return false;
            }
        }
        return true;
    }
}

void print_prime(int n) {
    for (int i = 2; i<n; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }
}
