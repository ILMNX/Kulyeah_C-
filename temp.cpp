double jarak(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double d = sqrt(dx * dx + dy * dy);
    return d;
}

void findMax() {
    int n;
    cin >> n;
    int maxVal = -1e9;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > maxVal) {
            maxVal = x;
        }
    }
    cout << maxVal << endl;
}

void hitungRerata() {
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        sum += x;
    }
    double avg = sum / n;
    cout << avg << endl;
}

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n-2) + fib(n-1);
    }
}

double circle(int r) {
    const double pi = 3.14;
    double luas = pi * r * r;
    return luas;
}
