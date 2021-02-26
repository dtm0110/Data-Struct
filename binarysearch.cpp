#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; 
    if (arr[mid] == x)
      return 1;
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
    return binarySearch(arr, mid + 1, r, x);
  }
  return -1;
}
 
int main(void) 
{
	int y;cin>>y;
	while(y--)
	{
	  //int arr[] = {2, 3, 4, 10, 40};
	  int n,k,a[1000];
	  int dem=0;
	  cin>>n>>k;
	  for(int i=0;i<n;i++)
	  cin>>a[i];
	  for(int i=0;i<n-1;i++)
	  {
		  	if(binarySearch(a, i+1, n - 1,k -a[i] ))
		  	{

			  	int h=k-a[i];
			  	for(int j=i+1;j<n;j++)
			  	{
			  		if(a[i]==h)
			  		dem++;
			  	}
			}
		}
		cout<<dem<<endl;
	}
}
