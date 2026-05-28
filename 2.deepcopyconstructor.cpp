//Deep Copy Constructor
#include<bits/stdc++.h>
using namespace std;

class Test{
private:
    int a;
    int *p;

public:

    Test(int x){
        a = x;
        p = new int[5];
    }

    Test(Test &t){

        this->a = t.a;

        //this->p = t.p; // This is wrong.

        this->p = new int[5]; // Here we called deep copy constructor.
    }
};