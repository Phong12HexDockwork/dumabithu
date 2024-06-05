#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

bool allPositive(const vector<int>& arr) {
    for (int num : arr) {
        if (num <= 0) return false;
    }
    return true;
}

bool hasArithmeticTriplets(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 2; ++i) {
        if (arr[i+1] - arr[i] == arr[i+2] - arr[i+1]) {
            return true;
        }
    }
    return false;
}

int findSmallestPrimeIndex(const vector<int>& arr) {
    int minPrime = numeric_limits<int>::max();
    int minIndex = -1;
    for (int i = 0; i < arr.size(); ++i) {
        if (isPrime(arr[i]) && arr[i] < minPrime) {
            minPrime = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
  
    vector<int> arr;
    int n;

    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    if (allPositive(arr)) {
        cout << "Mang gom toan so duong." << endl;
    } else {
        cout << "Mang co chua so khong duong." << endl;
    }

    if (hasArithmeticTriplets(arr)) {
        cout << "Mang co it nhat mot bo 3 phan tu lap thanh cap so cong." << endl;
    } else {
        cout << "Mang khong co bo 3 phan tu nao lap thanh cap so cong." << endl;
    }

    int smallestPrimeIndex = findSmallestPrimeIndex(arr);
    if (smallestPrimeIndex != -1) {
        cout << "Vi tri cua so nguyen to nho nhat: " << smallestPrimeIndex << endl;
    } else {
        cout << "Mang khong co so nguyen to." << endl;
    }

    return 0;
}
