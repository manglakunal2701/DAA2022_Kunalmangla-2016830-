#include<iostream>
using namespace std;
void quickSort(int a[],int l,int r)
{
      int i=l,j=r;
      int key=a[l],t=0;
      if(l>r)
      return;
      while(i<j)
      {
          while(key>=a[i]&&i<j)
          i++;
          while(key<a[j])
          j--;
          if(i<j)
          {
              t=a[i];
              a[i]=a[j];
              a[j]=t;
          }

      }
      a[l]=a[j];
      a[j]=key;
      quickSort(a,l,j-1);
      quickSort(a,j+1,r);

}

int main(){
   int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   quickSort(arr,0,n-1);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }

}
