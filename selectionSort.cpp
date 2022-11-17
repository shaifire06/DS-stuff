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
    for (i=0;i<n-1;i++) //number of passes
    {
        for (j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"the selection sorted array is :";
    for (i=0;i<n;i++)
    cout<<a[i]<<" ";
}
