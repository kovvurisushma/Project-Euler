/* 
The sum of the squares of the first ten natural numbers is = (1^2 + 2^2 + 3^2.... + 10^2) = 385

The square of the sum of the first ten natural numbers is = (1 + 2 + 3 + .... + 10) ^ 2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 
3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


Thinking:
for first 4 numbers
sum of squares of first 4 numbers is - a^2 + b^2 + c^2 + d^2
square of sum of first4 numbers is - a^2 + b^2 + c^2 + d^2 + 2ab + 2ac + 2ad + 2bc + 2bd + 2cd

so difference is 2(ab + ac + ad + bc + bd + cd)

*/

void solve() {
    long long res = 0;
    
    for(int i = 1; i <= 100; i++) {
        for(int j = i + 1; j <= 100; j++) {
            long long cur = i * j;
            res += cur;
        }
    }
    cout << 2 * res << endl;
}
