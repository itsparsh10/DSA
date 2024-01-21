// Wap caluclate passing parcentage failing of students in a given 
#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter number of students: ";
    cin>>n;
    float css[n],html[n],dsa[n],pass_count=0,fail_count=0;
    for (int i=0; i<n; i++)
    {
        b:
        cout<<endl<<"Enter DSA marks of student "<<i+1<<" (out of 100) : ";
        cin>>dsa[i];
        cout<<"Enter HTML marks of student "<<i+1<<" (out of 100) : ";
        cin>>html[i];
        cout<<"Enter CSS marks of student "<<i+1<<" (out of 100) : ";
        cin>>css[i];
        if ((dsa[i]>100 or dsa[i]<0) or (html[i]>100 or html[i]<0) or (css[i]>100 or css[i]<0))
        {
            cout<<"Invalid marks. Try again."<<endl;
            goto b;
        }
        if (dsa[i]<40 or css[i]<40 or html[i]<40)
        {
            fail_count++;
        }
        else
        {
            pass_count++;
        }
    }
    cout<<endl<<"Number of students passed : "<<pass_count<<endl<<"Passing Percentage: "<<(pass_count/float(n))*100<<" % "<<endl;
    cout<<endl<<"Number of students failed : "<<fail_count<<endl<<"Failing Percentage: "<<(fail_count/float(n))*100<<" % "<<endl;
    return 0;
}