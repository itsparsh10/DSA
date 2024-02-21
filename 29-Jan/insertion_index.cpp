#include<iostream>
using namespace std;
void index()
{
    int arr[46]={-1};
  
    int n;
    cout<<"Enter The Element You Want :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Elements :";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the index number :";
    cin>>x;
    cout<<"Enter the value :";
    cin>>arr[x-1];
    for(int j=0;j<=n;j++)
    {
        cout<<arr[j]<<" ";
    } 
}
int main()
{
    index();
    return 0;
}
