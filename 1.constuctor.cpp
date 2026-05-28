//Accessor and Mutator
#include<bits/stdc++.h>
using namespace std;

class Marker{
private:
    string color;
    string nature;

public:

    //Default Constructor or Non - parameterized Constructor
    Marker(){
        color = "Red";
        nature = "Temporary";
    }

    //Parameterized Constructor
    Marker(string color = "Red", string nature = "Temporary"){
        this->color = color;
        this->nature = nature;
    }

    //Copy Constructor
    Marker(Marker &m){
        this->color = m.color;
        this->nature = m.nature;
    }

    pair<string ,string> getter(){
        return {color,nature};
    }
};

int main(){

    Marker m1("Blue","Temporary"), m2("Black","Permanent");

    //Marker m3;

    //When we calling m3 without passing any thing then
    //Error - call of overloaded 'Marker()' is ambiguous, so either comment default constructor
    //Or Pass Atleast One Arguments

    Marker m3(m2);

    cout<<"Marker M1 - Color "<<m1.getter().first<<" Nature "<<m1.getter().second<<endl;

    cout<<"Marker M2 - Color "<<m2.getter().first<<" Nature "<<m2.getter().second<<endl;

    cout<<"Marker M3 - Color "<<m3.getter().first<<" Nature "<<m3.getter().second;

    return 0;
}