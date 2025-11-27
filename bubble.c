#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {5, 3, 8, 1, 2};
    int n = 5;

    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);

    for(int x : a) cout << x << " ";
    cout << endl;
    return 0;
}
