#include <iostream>
using namespace std;
struct Student {
    int rollno;
    string name;
    string dob;
};

int main() {
    int n;

  
    cout << "Enter the number of students: ";
    cin >> n;

    
    Student students[n];

    
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter data for Student " << i + 1 << ":" << endl;

        cout << "Enter Roll No: ";
        cin >> students[i].rollno;

        cout << "Enter Name: ";
        cin.ignore();  
        getline(cin, students[i].name);

        cout << "Enter Date of Birth (DOB): ";
        getline(cin, students[i].dob);
    }

    
    cout << "\nDisplaying data for " << n << " students:" << endl;

    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Roll No: " << students[i].rollno << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "DOB: " << students[i].dob << endl;
    }

    return 0;
}