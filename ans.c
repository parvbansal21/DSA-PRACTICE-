#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Printing arrray
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Sum, max, min
    int sum = 0;
    int maxi = arr[0];
    int mini = arr[0];

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
    }

    cout << "\nSum = " << sum;
    cout << "\nMax = " << maxi;
    cout << "\nMin = " << mini;

    return 0;
}
