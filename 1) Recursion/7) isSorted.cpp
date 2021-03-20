#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    if (size == 0 || size == 1) {
        return true;
    }
    
    if (arr[0] > arr[1]) {
        return false;
    }  
    
    bool so = isSorted(arr+1, size-1);
    return so;
    
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << isSorted(arr, n);
}