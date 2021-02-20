#include<iostream>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    
    int so = fact(n-1);
    
    return n * so;
}

int main() {
    int n;
    cin >> n;
    
    cout << fact(n);
}