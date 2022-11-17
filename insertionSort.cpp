#include<iostream>
using namespace std;
int main()
{
    int i,j,a[100],n,temp;
    cout<<"enter the size of the array:\n";
    cin>>n;
    cout<<"enter the elements now:";
    for (i=0;i<n;i++)
    cin>>a[i];
    for (i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"the insertion sorted array is :";
    for (i=0;i<n;i++)
    cout<<a[i]<<" ";
}
