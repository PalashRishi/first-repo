#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[n],num,first,last,middle;
    for(i=0;i<n;i++)
    {cin>>arr[i];}
    cin>>num;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<num)
        first=middle+1;
        else if(arr[middle]==num)
        cout<<"element found"<<num<<"position"<<middle<<endl;
        else
        last=middle-1;
    }
    if(first>last)
    cout<<"element not found"<<num<<endl;
    return 0;
}