class Base {
public:
    void fun1() {
        cout << "Base Function\n";
    }
};

class Derived : public Base {
public:
    void fun2() {
        cout << "Derived Function\n";
    }
};

int main() {
    Base *p;

    p = new Derived();

    p->fun1();   // OK
    p->fun2();   // ERROR
}