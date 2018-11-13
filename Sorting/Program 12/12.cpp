#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
int t=*a;
*a=*b;
*b=t;
}

void max_heap(int a[], int n, int i)
{
int max=i;
int l=((2*i)+1);
int r=((2*i)+2);

if(l<n && a[l]>a[max])
max=l;

if(r<n && a[r]>a[max])
max=r;

if(max!=i)
{
swap(a[max],a[i]);
max_heap(a,n,max);
}

}

void heap_sort(int a[], int n)
{
for(int i=n/2-1;i>=0;i--)
max_heap(a,n,i);

for(int i=n-1;i>=0;i--)
{
swap(a[0],a[i]);
max_heap(a,i,0);
}

}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

heap_sort(a,n);

for(int i=0;i<n;i++)
cout<<a[i]<<" ";

}
