#include<bits/stdc++.h>

using namespace std;
int a[100];

int input(int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void swap(int j)
{
    a[j]=a[j]+a[j+1];
    a[j+1]=a[j]-a[j+1];
    a[j]=a[j]-a[j+1];
}
void swap2(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int bubble_sort(int n)
{
    for(int i=0;i<n-1;i++)
    {
       int flag=0;
       for(int j=0;j<n-1-i;j++)
       {
          if(a[j]>a[j+1])
          {
             swap(j);
             //swap2(&a[j],&a[j+1]);
             flag=1;

          }
       }
       if(flag==0)
        break;
    }
}

int main()
{
    int n;
    cout<<"enter the array size : ";
    cin>>n;
    cout<<"enter the array : ";
    input(n);
    bubble_sort(n);
    cout<<"The sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
