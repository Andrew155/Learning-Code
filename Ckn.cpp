//CPP
#include<iostream>
using namespace std;

int Ckn(int k, int n) {
    int arr[n + 1][k + 1];
    // khởi tạo mảng 2 chiều kích thước (n+1)*(k+1) để tính được all giá trị Ckn(0<=k<=n)
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 0 || j == i) { //0Cn = nCn = 1
                arr[i][j] = 1;
            } else {
                arr[i][j] = (arr[i - 1][j] + arr[i - 1][j - 1]) % 1000000007; // kCn + (k+1)Cn = (k+1)C(n+1)
            }
        }
    }
    
    return arr[n][k];
}

int main() {
    int k, n;
    cin >> k >> n;
    
    int result = Ckn(k, n);
    
    cout << result << endl;
    
    return 0;
}
