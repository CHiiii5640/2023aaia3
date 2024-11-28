#include <string>
#include <iostream>
using namespace std;
struct Node
{
    int val;
};
class Cat
{
public:
    string name;
};
int main()
{
    Cat cat1;
    cat1.name="Big yellow";
    Node node;
    node.val=1;
}
