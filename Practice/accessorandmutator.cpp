#include<iostream>
using namespace std;

class bank{
    private:
    string phone_no;
    public:
    string name;
    bank(string name,string p){
        this->name=name;
        phone_no=p;
    }
    void changephone(string s){
        phone_no=s;
    }
    string f(){
        return phone_no;
    }
};
int main(){
    bank b("sidhant","703222222");
    b.changephone("3343223222");
    cout<<b.f();
}