#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n1, n2;
        cout << "Enter size of first set: ";    
    cin >> n1;
    vector<int> v1(n1);
    for (int i = 0; i < n1; i++) cin >> v1[i];
    cout << "Enter size of second set: ";
    cin >> n2;
    vector<int> v2(n2);
    for (int i = 0; i < n2; i++) cin >> v2[i];

    set<int> s1(v1.begin(), v1.end());
    set<int> s2(v2.begin(), v2.end());
    set<int> inter;

    for (int x : s1) {
        if (s2.count(x)) inter.insert(x);
    }

    for (int x : inter) cout << x << " ";
    cout << endl;

    return 0;
}
