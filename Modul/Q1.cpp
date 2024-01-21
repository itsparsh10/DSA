// Write a cpp program to read diplay n numbers and find mean of all the num using array!
#include<iostream>
using namespace std;
int main() {

    int n = 0, mean = 0;
    cout << "Enter the numbers the elements You Wanna in array for mean : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mean += arr[i];
    }
    mean /= n;
    cout << "arrays: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl <<"mean: " << mean << endl;

    return 0;
}
