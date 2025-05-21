#include <bits/stdc++.h>
using namespace std;

// Corrected function to count all subsequences with sum = `sum`
int countSubsequences(int ind, int s, int sum, int arr[], int n) {
    if (ind == n) {
        return s == sum ? 1 : 0;  // count it if it matches
    }

    // Include arr[ind]
    int left = countSubsequences(ind + 1, s + arr[ind], sum, arr, n);

    // Exclude arr[ind]
    int right = countSubsequences(ind + 1, s, sum, arr, n);

    return left + right; // total ways
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    cout << countSubsequences(0, 0, sum, arr, n) << endl;
}
