#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    sort(arr.begin(),arr.end());
    int k;
    cout<<"Enter the kth element"<<endl;
    cin>>k;
    cout<<"kth smallest number is"<<endl;
    cout<<arr[k-1];

}
