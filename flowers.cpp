#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        int required = 50 - X;
        
        // The sum of two dice ranges from 2*Y to 2*Y + 10
        bool possible = false;
        for (int d1 = 0; d1 < 6; d1++) {
            for (int d2 = 0; d2 < 6; d2++) {
                int sum = (Y + d1) + (Y + d2);
                if (sum == required) {
                    possible = true;
                    break;
                }
            }
            if (possible) break;
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}