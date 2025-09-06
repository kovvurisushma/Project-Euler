bool generatePrime(long long n) {
    vector<bool> prime(n+1, true);
    for(long long i = 2; i * i <= n; i++) {
        for(long long num = 2 * i; num <= n; num += i) {
            prime[num] = false;
        }
    }
    vector<long long> res;
    // for(long long i = 2; i * i <= n ; i++) {
    //     if(prime[i]) res.push_back(i);
    //     if(prime[n / i]) res.push_back(n / i);
    // }
    return prime[n];
}


void solve() {
    long long num = 600851475143;
    // vector<long long> primes = generatePrime(num);
    // for(int i = primes.size() - 1; i >= 0; i--) {
    //     if(num / primes[i] == 0) {
    //         cout << primes[i] << endl;
    //         break;
    //     }
    // }
    long long maxi = 1;
    long long i = 2;
    while(i * i <= num) {
        if(num % i == 0) {
            if(generatePrime(i)) maxi = max(maxi, i);
        }
        i++;
    }
    cout << maxi << endl;
}
