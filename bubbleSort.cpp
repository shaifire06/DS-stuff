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
    for (i=1;i<n-1;i++) //number of passes
    {
        for (j=0;j<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"the bubble sorted array is :";
    for (i=0;i<n;i++)
    cout<<a[i]<<" ";
}
