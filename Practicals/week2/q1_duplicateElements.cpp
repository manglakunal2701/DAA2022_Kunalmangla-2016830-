#include<iostream>
#include <vector>
using namespace std;
void duplicate_no(int arr[],int n){
    int key,count=1,flag=0;
    cout<<"Enter the number to find"<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
             flag=-1;
            for(int j=i+1;j<n;j++){
                if(arr[j]==key){
                    count++;
                }
                else{
                    break;
                }
            }
        }
        if(flag==-1){
                break;
            }
    }
    if(flag==0){
        cout<<"Number not found"<<endl;
    }
    else{
        cout<<"Number is found"<<endl;
        cout<<"total number of copies are "<<count<<endl;    
    } 
}
int main(){
    int n,key;
    cout<<"ENter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate_no(arr,n);
}
