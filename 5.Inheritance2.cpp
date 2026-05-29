#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"hi";
    }
    base(int x){
        cout<<x;
    }
};

class child:public base{
    public:
    child(){
        cout<<"of child"<<endl;
    }
};

int main(){
    child b;
}