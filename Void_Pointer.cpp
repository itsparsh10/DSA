#include<iostream>
using namespace std;
int main()
{
    void* ptr;
    // char value
    char a = 'Hello';
    ptr=&a;
    cout<<"Value of variable 'a' is: "<<a<<endl;
    cout<<"Address of variable 'a' is: "<<ptr<<endl;
    cout<< *(int*)ptr;
   return 0;
}





#include<iostream>
using namespace std;
int main()
{
    void* ptr;
    // int value 
    int a = 1 ;
    ptr=&a;
    cout<<"Value of variable 'a' is: "<<a<<endl;
    cout<<"Address of variable 'a' is: "<<ptr<<endl;
    cout<< *(int*)ptr;
   return 0;
}