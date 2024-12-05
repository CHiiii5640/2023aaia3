// advent of code day01
int main() {
    vector<int> A,B;
    int a,b;

    while(cin>>a>>b)
    {
        A.push_back(a);
        B.push_back(b);
    }

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    int ans=0;
    for(int i=0;i<A.size();i++)
    {
        cout<<A[i]<<" ";
        ans+=abs(A[i]-B[i]);
    }
    cout<<"µª®×¬O: "<<ans;
}
