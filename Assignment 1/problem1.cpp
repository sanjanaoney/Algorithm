/*#include<bits/stdc++.h>
using namespace std;
//int n;
int nums[100];
void merge(int l,int r, int mid)
{
    int left_size=mid-l+1;
    int L[left_size+1];
    int right_size=r-mid;
    int R[right_size+1];
    for(int i=mid+1,j=0;i<=r;i++,j++)
    {
        L[j]=nums[i];
    }
    for(int i=mid+1,j=0;i<=r;i++,j++)
    {
        R[j]=nums[i];
    }
    L[left_size]=INT_MAX;
    R[right_size]=INT_MAX;
    int lp=0,rp=0;
    for(int i=l;i<=r;i++)
    {
        if(L[lp]<=R[lp])
        {
            nums[i]=L[lp];
            lp++;
        }
        else
        {
            nums[i]=R[rp];
            rp++;
        }
    }
}
void mergesort(int l,int r)
{
    if(l==r)
    return;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}
int main()
{
int n;
cin>>n;
int nums[n];
for(int i=0;i<n;i++)
{
    cin>>nums[i];
}
mergesort(0,n-1);
for(int i=0;i<n;i++)
{
    cout<<nums[i]<<" ";
}

    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE=100;
int nums[MAX_SIZE];

void merge(int l,int r, int mid)
{
    int left_size = mid - l + 1;
    int right_size = r - mid;
    int L[left_size];
    int R[right_size];

    for (int i = 0; i < left_size; i++)
     {
        L[i] = nums[l + i];
    }
    for (int i = 0; i < right_size; i++)
     {
        R[i] = nums[mid + 1 + i]; 
    }

    L[left_size] = INT_MIN;
    R[right_size] = INT_MIN;

    int lp = 0, rp = 0;
    for (int i = l; i <= r; i++)
     {
        if (L[lp] >= R[rp]) 
        {
            nums[i] = L[lp];
            lp++;
        } else 
        {
            nums[i] = R[rp];
            rp++;
        }
    }
}

void mergesort(int l, int r) 
{
    if (l >= r)
        return;

    int mid = l + (r - l) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, r, mid);
}

int main()
 {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
     {
        cin >> nums[i];
    }
    mergesort(0, n - 1);
    for (int i = 0; i < n; i++)
     {
        cout << nums[i] << " ";
    }

    return 0;
}
