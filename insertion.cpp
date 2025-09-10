#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;
    cout<<"Enter the number of elements";
    cin >> n;

   cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter position (1 to " << n+1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> val;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = val;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;



}