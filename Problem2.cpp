void solve() {
    long long a = 1, b = 2;
    long long res = 0;
    while(a <= 4000000 &&  b <= 4000000) {
        if(a%2 == 0) res += a;
        if(b%2 == 0) res += b;
        long long temp = a + b;
        long long temp2 = temp + b;
        a = temp;
        b = temp2;
    }
    cout << res << endl;
}
