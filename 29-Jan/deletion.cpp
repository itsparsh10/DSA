// Deletion of array 
#include<iostream>
#include<algorithm>
using namespace std;
void deleteFromArray(int a,int arr5[]) //function to delete elements from array
{
    int b,pos;
    cout<<"Enter element to delete: ";
    cin>>b;
    for (int i=0;i<a;i++)
    {
        if (arr5[i]==b)
        {
            pos=i;
        }
    }
    for (int i=pos;i<a;i++)
    {
        arr5[i]=arr5[i+1];
    }
    a--;
    for (int i=0;i<a;i++)
    {
        cout<<arr5[i]<<endl;
    }
}
int main()
{
    int arr[46],n;
    fill_n(arr,46,-1); //used to initialise the array with -1 values: fill_n(name of array,size of array,value to initialise with)
    cout<<"Enter number of students' details you want to enter(less than 45): ";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cout<<"Enter detail: ";
        cin>>arr[i];
    }
    deleteFromArray(n,arr);
    return 0;
}