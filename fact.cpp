// 5) Factorial (iterative)
#include <iostream>
using namespace std;
int main() {
    int n; 
    cout<<"ENTER THE NUMBER"<<endl;
    cin >> n;
    unsigned long long f = 1;
    for (int i = 2; i <= n; ++i) f *= i;
    cout << f;
    return 0;
}
