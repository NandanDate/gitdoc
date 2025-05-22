#include <iostream>
using namespace std;

class Parent{
public :
    void GeeksforGeeks_Print(){
    cout<<"Base Function"<<endl;}
};


class Child : public Parent{
public:
    void GeeksforGeeks_Print(){
    cout<<"Derived Function"<<endl;}
};

int main()
{
    Child obj;
    obj.GeeksforGeeks_Print(); //obj.Parent::GeeksforGeeks_Print();
    return 0;

}
