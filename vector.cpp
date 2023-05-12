#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    cout<<"pushing elements into vector using push back:"<<endl;
    a.push_back(12);
    a.push_back(13);
    a.push_back(14);
    cout<<"1st way to print vector using it: "<<endl;

    for(auto it:a) cout<<it<<endl;

    cout<<"2nd way to print vector using begin: "<<endl;

    for(auto it = a.begin();it!=a.end();it++) cout<<*it<<endl;

    cout<<"1st way to print vector using rbegin and rend: "<<endl;

    for(auto it = a.rbegin();it!=a.rend();it++) cout<<*it<<endl;


    cout<<"size using .size in vector:"<<a.size();

    cout<<endl<<"remove last element using .pop_back()"<<endl;
    a.pop_back();
     for(auto it = a.rbegin();it!=a.rend();it++) cout<<*it<<endl;

     cout<<"copying one vector to another:"<<endl;
    vector<int> c(a);
     for(auto it = c.rbegin();it!=c.rend();it++) cout<<*it<<endl;

    cout<<"clearing elements in vector:"<<endl;
    a.clear();
     for(auto it = a.rbegin();it!=a.rend();it++) cout<<*it<<endl;

     cout<<"make all elements 0 or anything:"<<endl;
     vector<int> b(4,0);
      for(auto it = b.rbegin();it!=b.rend();it++) cout<<*it<<endl;

    cout<<"vector of vectors 2d: "<<endl;

    vector<vector<int>> vec;
    vector<int> vec1 = {1,2,3};
    vector<int> vec2 = {1,2};
    vector<int> vec3 = {1,2,3,5,6};
    vec.push_back(vec1);
    vec.push_back(vec2);
    vec.push_back(vec3);
    for(auto vect:vec){
            for(auto it:vect) cout<<it<<" ";
        cout<<endl;
    }

    cout<<"defining 2d vector of specific length:"<<endl;

    vector<vector<int>>  h0(10,vector<int> (10,0)); // 10 cross 10 vector with all 0's

    for(auto vect:h0){
            for(auto it:vect) cout<<it<<" ";
        cout<<endl;
    }
    cout<<"defining 2d arrays using vectors:"<<endl;

    vector<int> h2[3]; // 10 cross 10 vector with all 0's
    vector<int> h3(5,0);
    h2[0].push_back(1);
    h2[0].push_back(2);
    h2[0].push_back(3);
    h2[1].push_back(5);
    for(auto vect:h2){
            for(auto it:vect) cout<<it<<" ";
        cout<<endl;
    }
    vector<int> vee(10,0);
    cout<<"size of vee is: "<<vee.size();
    vee.clear();
    cout<<endl;
    cout<<"size of vee after erasing: "<<vee.size();
    vee.emplace_back(8);
    vee.emplace_back(9);
    vee.emplace_back(10);
    cout<<endl;
    cout<<"size of vee after emplacing: "<<vee.size()<<" :"<<vee[0]<<vee[1]<<vee[2];

}
