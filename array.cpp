#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    array<int,5> arr;
    for(int i{};i<5;i++){
        int p;
        cin>>p;
        arr[i] = p;
    }
    cout<<"one way to print array elements: begin to end"<<endl;
     for(auto it = arr.begin();it!=arr.end();it++){
        cout<< *it << endl;
    }
    cout<<"2nd way to print array elements using at:"<<endl;
    for(int i{};i<5;i++){
        cout<< arr.at(i) << endl;
    }
    cout<<"3rd way to print array elements using rbegin to rend:"<<endl;
    for(auto it = arr.rbegin();it!=arr.rend();it++){
        cout<< *it << endl;
    }
    cout<<"4th way to print array elements using end to begin:"<<endl;
    for(auto it = arr.end()-1;it>=arr.begin();it--){
        cout<< *it << endl;
    }
    cout<<"5th way to print array elements using rbegin to rend:"<<endl;
    for(auto it = arr.rbegin();it!=arr.rend();it++){
        cout<< *it << endl;
    }
    cout<<"6th way to print array elements using it:"<<endl;
    for(auto it:arr){
        cout<< it << endl;
    }
    arr.fill(10);
    cout<<"array after filling with 10:"<<endl;
    for(int i{};i<5;i++){
        cout<< arr.at(i) << endl;
    }
    cout<< "size of array using .size is: "<<arr.size()<<endl;
    cout<< "front element of array using .front: "<<arr.front()<<endl;
    cout<< "size of array using .back: "<<arr.back()<<endl;
}
