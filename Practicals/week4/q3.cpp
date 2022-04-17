#include <iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr){
        cin>>it;
    }
    int k;
    cout<<"Enter the kth element"<<endl;
    cin>>k;
    set<int> res;
     set<int>::iterator itr;
    for( int i=0;i<arr.size();i++){
        res.insert(arr[i]);
    }
//    for( itr=res.begin();itr!=res.end();itr++){
//        cout<<*itr<<" ";
//    }
   itr= res.begin();
   advance(itr,k-1);        //it will point to kth index element;;;;;;;
   cout<<*itr<<endl;
}
