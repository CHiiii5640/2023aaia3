#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["Mr.G"]=12750236;
    m["帥"]=12750211;

    cout<<"Mr.G的學號是: "<<m["Mr.G"]<<endl;
}
