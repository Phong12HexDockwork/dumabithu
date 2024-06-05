#include <bits/stdc++.h>
using namespace std;

// Tính tổng các phần tử trên cột thứ k
int sumColumn(const vector<vector<int>>& matrix, int k) {
    int sum = 0;
    for (const auto& row : matrix) {
        sum += row[k];
    }
    return sum;
}

// Tính tích các phần tử trên cột thứ k
int productColumn(const vector<vector<int>>& matrix, int k) {
    int product = 1;
    for (const auto& row : matrix) {
        product *= row[k];
    }
    return product;
}

// Sắp xếp các phần tử trên cột thứ k tăng dần
void sortColumn(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();
    vector<int> column(n);
    for (int i = 0; i < n; ++i) {
        column[i] = matrix[i][k];
    }
    sort(column.begin(), column.end());
    for (int i = 0; i < n; ++i) {
        matrix[i][k] = column[i];
    }
}

// Tìm vị trí phần tử âm lớn nhất trên cột thứ k
int findMaxNegativeInColumn(const vector<vector<int>>& matrix, int k) {
    int maxNegative = numeric_limits<int>::min();
    int index = -1;
    for (int i = 0; i < matrix.size(); ++i) {
        if (matrix[i][k] < 0 && matrix[i][k] > maxNegative) {
            maxNegative = matrix[i][k];
            index = i;
        }
    }
    return index;
}

// Khởi tạo và sắp xếp mảng một chiều tăng dần
void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int rows, cols, k;

    cout << "Nhap so hang va so cot cua mang: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Nhap so thu tu cua cot muon tinh tong/tich, sap xep, tim kiem: ";
    cin >> k;

    if (k < 0 || k >= cols) {
        cout << "Cot khong hop le!" << endl;
        return 1;
    }

    int sum = sumColumn(matrix, k);
    int product = productColumn(matrix, k);
    sortColumn(matrix, k);
    int maxNegativeIndex = findMaxNegativeInColumn(matrix, k);

    cout << "Tong cac phan tu tren cot thu " << k << ": " << sum << endl;
    cout << "Tich cac phan tu tren cot thu " << k << ": " << product << endl;

    cout << "Mang sau khi sap xep cot thu " << k << " tang dan:" << endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    if (maxNegativeIndex != -1) {
        cout << "Vi tri phan tu am lon nhat tren cot thu " << k << ": " << maxNegativeIndex << endl;
    } else {
        cout << "Khong co phan tu am tren cot thu " << k << endl;
    }

    vector<int> arr;
    int n;

    cout << "Nhap so luong phan tu cua mang mot chieu: ";
    cin >> n;

    arr.resize(n);

    cout << "Nhap cac phan tu cua mang mot chieu: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sortArray(arr);

    cout << "Mang mot chieu sau khi sap xep tang dan: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
