#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to insert: ";
    cin >> x;

   int i = n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    n++;

    cout << "Array after insertion: ";
    for (int j = 0; j < n; j++) cout << arr[j] << " ";
    return 0;
}
