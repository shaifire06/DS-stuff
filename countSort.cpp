#include <iostream>
using namespace std;
void countsort(int arr[],int n)
{
    int i,k; //k is the max element 
    k=arr[0];
    for (i=0;i<n;i++)
    k=max(k,arr[i]); //the max element will tell us how many elements  are there in the count array 
    int count[10]={0}; //count array initialise it with zero
    for (i=0;i<n;i++)
    count[arr[i]]++; //we will get the count of each element
    for(i=1;i<k;i++) //start from 1 bcz we have to add (i-1) in i
    count[i]+=count[i-1]; //modifies the count array
    int output[n]; //output array of size n 
    for (i=n-1;i>=0;i--)
    output[--count[arr[i]]]=arr[i]; 
    for (i=0;i<n;i++)
    arr[i]=output[i]; //putting output array back in the original array
}
int main()
{
    int n=9;
    int arr[]={1,3,2,3,4,1,6,4,3};
    countsort(arr,9);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}
