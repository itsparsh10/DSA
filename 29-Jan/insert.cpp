// It Is for Beginning Insert
#include<iostream>
using namespace std;
void getvalue()
{
    int n;
    int arr[46];
    cout<<"Enter The Element You Want :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element :";
        cin>>arr[i];
    }
    for(int j=n;j>=0;j--)
    {
        arr[j+1]=arr[j];
    }
    arr[n]=29;
    for(int k=0;k<=n;k++)
    {
        cout<<arr[k]<<" ";
    }

}
int main()
{
    getvalue();
    return 0;
}


