void solve() {
    int target = 1000;
    long long sum = 0;
    for(int i = 1; i < target; i++) {
        if(i % 3 == 0 || i % 5 == 0) sum += i;
    }
    cout << sum;
}
