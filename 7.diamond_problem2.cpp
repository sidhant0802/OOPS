#include<iostream>
using namespace std;

class person{
    public:
    person(int x){
        cout<<"hi person is called"<<endl;
    }
};

class father: virtual public person{
    public:
    father(int x):person(x){
        cout<<"Father is called"<<endl;
    }
};
class mother:virtual public person{
    public:
    mother(int x):person(x){
        cout<<"Mother is called"<<endl;
    }
};

class child:public father ,public mother{
    public:
    child(int x):person(x),mother(x),father(x){
        cout<<"hey child is called"<<endl;
    }
};

class child2:public person{
    public:
    child2(int x):person(x){
        cout<<"hey child is called"<<endl;
    }
};

int main(){
    child c(20);
}