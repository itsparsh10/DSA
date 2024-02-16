// make a array and use the for loop and make a sum of the each arrey 
#include<iostream>
using namespace std;
void avgSubject(int *ptrarray[5]) {
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += ptrarray[j][i];  
        }
        double avg = static_cast<double>(sum) / 5.0;
        cout << "Average for Subject " << i + 1 << ": " << avg << endl;
    }
}
int main() {
    int sub1[5], sub2[5], sub3[5], sub4[5], sub5[5];  

    for (int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << " for 5 students: ";
        cin >> sub1[i] >> sub2[i] >> sub3[i] >> sub4[i] >> sub5[i];
    }

    int *ptrarray[5] = {sub1, sub2, sub3, sub4, sub5};  
    avgSubject(ptrarray);  

    return 0;
}



