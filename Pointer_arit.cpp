#include<iostream>
using namespace std;
int main()
{
    int a=5 ,b=6 , *ptr1=&a , *ptr2=&b , sum= (*ptr1)+(*ptr2);
    cout<<"The sum of "<<*ptr1<<" and "<<*ptr2<<  "="  <<sum<<endl;
    (*ptr1)--;(*ptr2)++;
    cout<<"The sum of "<<*ptr1<<" and "<<*ptr2<<  "="  <<sum<<endl;
    return 0;
}