#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr;
    ptr =&a;
    cout<<ptr<<endl<<*ptr<<endl;
    *ptr=0;
    cout<<ptr<<endl;
    cout<< sizeof (ptr)<<endl<<sizeof(*ptr);



   return 0;
}