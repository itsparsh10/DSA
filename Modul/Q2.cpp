#include <iostream>
using namespace std;

void largestNumber(int *arr, int size) {
    int max_num_1=arr[0];
    int max_num_2=arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max_num_1) {
            max_num_2 = max_num_1;
            max_num_1 = arr[i];
        }
        else if (arr[i] > max_num_2 && max_num_1 != arr[i]) {
            max_num_2 = arr[i];
        }
    }
    cout << max_num_1 << " " << max_num_2 << endl;
    return;
}

int main() {

    int n = 0;
    cout << "Enter the length of the array which you wanna check : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    largestNumber(arr,n);

    return 0;
}