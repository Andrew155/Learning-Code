#include<iostream>
#include<vector>
using namespace std;
int countSubsequences_even(int n, int k, vector<int> &arr){
    int count = 0;
    vector<int> prefixSum(n+1, 0); //khởi tạo 1 vector để tính tổng các phần tử liên tiếp trong mảng
    for(int i = 1; i <=n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i-1]; //prefixSum[i] = tổng tới phần tử thứ i, prefixSum[0] = 0
     }
    for(int i = 0; i <= n - k; i++){
        int sum = prefixSum[k+i] - prefixSum[i];
        if(sum % 2 == 0){
            count++;
        }
    }
    return count;
    
}



int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }
   
    int count_real =  countSubsequences_even(n, k, arr);
    cout << count_real << endl;
    
}