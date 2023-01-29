#include <iostream>
using namespace std;
int f(int *a,int i,int n) {
   if(i==n-1)
   return a[i];
   int res = a[i]+f(a,i+1,n); 
   return res;
}
int main()
{
    int arr[]={3,5,6,20,1};
    int n=5;
    int ans=f(arr,0,n);
    cout<<ans;
    return 0;

}