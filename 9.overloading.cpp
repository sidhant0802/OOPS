#include<iostream>
using namespace std;

class Test{
public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }

    void add(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
};

int main(){
    Test t;

    t.add(10,20);
    t.add(10,20,30);
}