#include <bits/stdc++.h>

using namespace std;

// Hàm kiểm tra số hoàn chỉnh
bool isPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            if (i == num / i) {
                sum += i;
            } else {
                sum += i + (num / i);
            }
        }
    }
    return sum == num;
}

// Hàm kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Hàm đếm số hoàn chỉnh trong mảng
int countPerfectNumbers(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (isPerfectNumber(num)) {
            ++count;
        }
    }
    return count;
}

// Hàm đếm số nguyên tố trong mảng
int countPrimes(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (isPrime(num)) {
            ++count;
        }
    }
    return count;
}

// Hàm đếm số nguyên tố duy nhất trong mảng
int countUniquePrimes(const vector<int>& arr) {
    unordered_set<int> uniquePrimes;
    for (int num : arr) {
        if (isPrime(num)) {
            uniquePrimes.insert(num);
        }
    }
    return uniquePrimes.size();
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    vector<int> arr;
    int n;

    // Nhập số lượng phần tử của mảng
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Nhập các phần tử của mảng
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // Thực hiện các phép đếm
    int countPerfect = countPerfectNumbers(arr);
    int countPrime = countPrimes(arr);
    int countUniquePrime = countUniquePrimes(arr);

    // In kết quả
    cout << "So phan tu la so hoan chinh: " << countPerfect << endl;
    cout << "So phan tu la so nguyen to: " << countPrime << endl;
    cout << "So phan tu la so nguyen to (khong trung lap): " << countUniquePrime << endl;

    return 0;
}
