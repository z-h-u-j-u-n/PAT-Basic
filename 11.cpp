#include<iostream>
using namespace std;
//c++����Ҫ����������Ǻܷ���
int main()
{
    int n;
    long long a,b,c;
    cin>>n;
    for( int i=1; i<=n; i++ ){
        cin>>a>>b>>c;
        cout<<"Case #"<<i<<": ";
        if( a+b>c )
            cout<<"true"<<endl;
        else
            cout<<"false"<<endl;
    }
    return 0;
}
