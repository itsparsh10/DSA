// Passing Data Value

// #include<iostream>
// using namespace std;
// void fun(int num){
//     cout<<num;

// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     fun(arr[3]);
//    return 0;
// }



// Passing Address

// #include<iostream>
// using namespace std;
// void fun(int num){
//     cout<<&num;

// }
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     fun(arr[3]);
//    return 0;
// }



// Passing Entire array
#include<iostream>
using namespace std;

void fun(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    fun(arr, 5);
    return 0;
}


