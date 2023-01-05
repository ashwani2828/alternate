#include<iostream>
using namespace std;
void swalt(int ar[],int n)
{
  for (int i = 0; i < n; i=i+2)
  {
    if (i+1<n)
    {
      swap(ar[i],ar[i+1]);
    }
    
  }
  
}
int main()
{
  int arr[5]={1,3,6,8,4};
  swalt(arr,5);
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
  
}
