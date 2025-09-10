// 4) Fibonacci up to n terms
#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    long long a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        cout << a << (i+1<n ? ' ' : '\n');
        long long c = a + b; a = b; b = c;
    }
    return 0;
}
