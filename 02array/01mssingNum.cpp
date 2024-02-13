#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[]) {
    int xorArr = 0;
    int xorN = 0;

    // XOR all elements in the array
    for (int i = 0; i < 9; i++) {
        xorArr ^= arr[i];
    }

    // XOR all numbers from 1 to 100
    for (int i = 1; i <= 10; i++) {
        xorN ^= i;
    }

    // The missing number is the XOR of both XORs
    int missingNumber = xorArr ^ xorN;

    return missingNumber;
}
int main(){
  int arr[9]={1,2,3,4,5,7,8,9,10}; // Array containing numbers from 1 to 100 with one missing number
    // for (int i = 0; i < 99; i++) {
    //     arr[i] = i + 1;
    // }
    int missingNumber = findMissingNumber(arr);
    cout << "missing Number is " << missingNumber << endl;
    return 0;
}