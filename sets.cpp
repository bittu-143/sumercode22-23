#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> a;
    for(int i{10};i>0;i--){
        int x;
        cin>>x;
        a.insert(x);
    }
    for(auto it:a) cout<<it<<" "; //gives ascending order unique elements only
    cout<<endl<<"size of set: "<<a.size();

    a.erase(a.begin()); //del a specific element using pointers
    cout<<endl<<"size of set: "<<a.size();

    a.erase(7); //deleting specific element by giving its value
    cout<<endl<<"size of set: "<<a.size();
    cout<<endl;
    for(auto it:a) cout<<it<<" ";

    a.erase(a.begin(),a.find(8));
    cout<<endl<<"size of set: "<<a.size();
    cout<<endl;
    for(auto it:a) cout<<it<<" ";
}
