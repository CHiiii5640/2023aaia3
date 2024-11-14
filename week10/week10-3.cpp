#include <iostream>
#include <string>
using namespace std;

class Cat
{
public:
    Cat(string _name)
    {
        name=_name;
    }
    string name;
    void print()
    {
        cout<<"I am a cat.My name is "<<name<<".\n";
    }
};

int main()
{
    Cat cat1("©ô°]"),cat2("¤j¶À");
    cat1.print();
    cat2.print();
}
