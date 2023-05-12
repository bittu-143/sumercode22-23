#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y;
    string a;
    pairup(int x1,int y1,string s){
        x = x1;
        y = y1;
        a=s;
    }
};
int main(){
    cout<<"there are two ways of making struct variables:"<<endl;
    cout<<"way 1: node b; b.x=val,b.y=val,b.a=val"<<endl;
    node c;
    c.x = 10;
    c.y = 20;
    c.a = "hello";
    cout<< c.x<<" "<<c.y<<" "<<c.a;
    cout<<"way 2: node b; b pairup 1,2,world "<<endl;
    node b;
    b.pairup(1,2,"World");
    cout<< b.x<<" "<<b.y<<" "<<b.a;
}
