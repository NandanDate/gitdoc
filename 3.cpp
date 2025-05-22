#include <iostream>
using namespace std;

class MyClass {
public :
    void MyFunction(){
    cout<<"Some content in parent class";
    }
};

class MyOtherClass {
public:
    void myOtherFunction(){
    cout<<"Some content in another class";
    }
};

class MyChildClass: public MyClass , public MyOtherClass{
};

int main()
{
    MyChildClass c;
    c.MyFunction();
    cout<<endl;
    c.myOtherFunction();
    return 0;
}
