// a. to access global variable when there is a local 
// variable with same name


// #include<iostream>
// using namespace std;
// int x=100;
// int main(){
//     int x=50;
//     cout<<x<<endl;
//     cout<<::x<<endl;
// }


// b. to define function outside class


// #include<iostream>
// using namespace std;

// class test{
//     public:
//     void display();
// };

// void test::display(){
//     cout<<"hello"<<endl;
// }

// int main(){
//     test t;
//     t.display();
// }


// c. to access static member of class

#include<iostream>
using namespace std;

class A{
    public:

    static int x;
};

int A::x = 10;

int main(){

    cout<<A::x;
}