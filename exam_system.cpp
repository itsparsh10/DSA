#include <iostream>
using namespace std;

struct marks
{
    int rollno;
    string name;
    int Cpp;
    int python;
    int maths;
    int srs;
    int Computer_Fundamentals;

    void getinfo()
    {
        cout<<"Enter Roll No.:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>name;
    }

    void displayinfo()
    {
        cout<<"Roll No:"<<rollno<<endl;
        cout<<"Name:"<<name<<endl;
    }
};

int main()
{
    int n;
    cout << "For enrollment enter \nFor Marks Entry enter 2:";
    cin >> n;

    if (n == 1)
    {
        cout << "1.Regular or 2.Re-exam:";
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            marks m;
            m.getinfo();
            cout<<endl<<endl;
            cout<<"Enrolled For the Exam"<<endl;
            m.displayinfo();
        }
        else if (choice == 2)
        {}
        else
        {}
    }
    else if(n==2)
    {
        cout << "1.Regular or 2.Re-exam";
        int choice;
        cin>>choice;
        if(choice==1)
        {
        }
        else if(choice==2)
        {
        }
        else
        {
            cout<<"Invalid Choice";
        }


    }
    
    return 0;
}