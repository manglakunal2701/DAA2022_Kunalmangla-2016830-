#include<iostream>
#include <vector>
using namespace std;
void sum2(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int sum=0;
    while(low<high){
        sum=arr[low]+arr[high];
        if(sum==target){
            cout<<"i is "<<low<<" j is "<<high<<endl;
            break;
        }
        else if(sum>target)
        {
            high--;
        }
        else{
            low++;
        }
    }
}

int main()
{
   int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    sum2(arr,n,key);    
}
