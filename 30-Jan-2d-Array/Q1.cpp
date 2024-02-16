// swap the value of largest and smallest element in the array and store the result and swap it.
#include<iostream>
using namespace std;
void swap(int arr1[],int n)
{
    
    int max=arr1[0],min=arr1[0],temp1,temp2,temp;
    for (int i=1;i<n;i++)
    {
        if (arr1[i]>max)
        {
            max=arr1[i];
            temp1=i;

        }
        else if (arr1[i]<min)
        {
            min=arr1[i];
            temp2=i;
        }

    }
    cout<<"Largest :"<<max<<endl<<"Smallest :"<<min<<endl;
    temp=arr1[temp1];
    arr1[temp1]=arr1[temp2];
    arr1[temp2]=temp;

    for (int i=0; i<n; i++){
        cout<<arr1[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter The Length Of Array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter The Elements "<<i+1<<endl;
        cin>>arr[i];
    } 
   swap(arr,n);
   return 0;
}
