#include <iostream>
#include <queue>
using namespace std;

int find_max(int n, int arr[]) {
    int max_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int find_min(int n, int arr[]) {
    int min_val = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int find_max_segment(int m, int n, int arr[]) {
    int max_segment = arr[m - 1];
    for (int i = m; i < n; i++) {
        if (arr[i] > max_segment) {
            max_segment = arr[i];
        }
    }
    return max_segment;
}

int sum(int n, int arr[]) {
    int sum_val = 0;
    for (int i = 0; i < n; i++) {
        sum_val += arr[i];
    }
    return sum_val;
}

int main() {
    int n;
    cin >> n;
    int *arr = new int[n]; // Sử dụng cấp phát động

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    queue<int> queries;
  
    while (1) {
        string query;
        cin >> query;
        if (query == "***") {
            break;
        }
        if (query == "find-max") {
            int max_real = find_max(n, arr);
            queries.push(max_real);
        } else if (query == "find-min") {
            int min_real = find_min(n, arr);
            queries.push(min_real);
        } else if (query == "find-max-segment") {
            int a, b;
            cin >> a >> b;
            int max_segment = find_max_segment(a, b, arr);
            queries.push(max_segment);
        } else if (query == "sum") {
            int sum_real = sum(n, arr);
            queries.push(sum_real);
        }
    }
    while (!queries.empty()) {
        cout << queries.front() << endl;
        queries.pop();
    }
    delete[] arr; // Giải phóng bộ nhớ động
    return 0;
}
