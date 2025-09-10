#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
     int total = (n - 1) * n / 2; // sum of 1..(n-1)
    int repeated = sum - total;

    cout << "Repeated element in array is: " << repeated << endl;
    return 0;

   
}
