#include<iostream>
using namespace std;
void leftRotateOne(int arr[],int n)
{
    int temp=arr[0],i;
    for(i=0;i<n-1;i++)
    
        arr[i]=arr[i+1];
        arr[i]=temp;
    
}
void leftRotate(int arr[],int d,int n)
{
    for(int i=0;i<d;i++)
    leftRotateOne(arr,n);
}
void show(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,d,a[1000];
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        
        cin>>a[i];
    }
    leftRotate(a,d,n);
   
    
    show(a,n);
}
