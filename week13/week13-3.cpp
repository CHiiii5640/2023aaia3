// advent of code day01
int main() {
    vector<int> A,B;
    int a,b;

    while(cin>>a>>b)
    {
        A.push_back(a);
        B.push_back(b);
    }
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
    }
}
