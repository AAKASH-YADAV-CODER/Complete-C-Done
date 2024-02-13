#include <bits/stdc++.h>
using namespace std;

vector<int> duplicateNumber(int arr[], int N) {
    vector<int> ans;
    for (int i = 0; i < N; i++) {
        int index = arr[i] % N;
        arr[index] += N;
    }
    for (int i = 0; i < N; i++) {
        if ((arr[i] / N) >= 2) {
            ans.push_back(i);
        }
    }
    return ans; // Return a vector of duplicate numbers
}

int main() {
    int arr[] = {1, 3, 3, 5, 2};
    int N = 5;
    vector<int> answer = duplicateNumber(arr, N); // Store the result in a vector
    if (answer.size() == 0) {
        cout << "No duplicates found." << endl;
    } else {
        cout << "Duplicate Numbers are:";
        for (int num : answer) {
            cout << " " << num;
        }
        cout << endl;
    }
    return 0;
}
