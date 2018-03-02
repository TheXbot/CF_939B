#include <iostream>

using namespace std;

int main() {
    long long int n;
    long long int k;
    cin >> n >> k;
    long long int *boxes = new long long int[k];
    for(int i = 0; i < k; i++) {
        cin >> boxes[i];
    }
    long long int answ;
    long long int bestRemainder = n;
    long long int temp;
    for(int i = 0; i < k; i++) {
        temp = n % boxes[i];
        if (temp <= bestRemainder) {
            answ = i + 1;
            bestRemainder = temp;
        }
    }
    cout << answ << " " << n / boxes[answ - 1];
    return 0;
}
