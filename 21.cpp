#include<iostream>
using namespace std;
//��һ�������ų��ֵĴ����ܷ���
int main()
{
    int a[10] = {0};
    char s[1024];
    cin>>s;
    for( int i=0; s[i]; i++ )
        a[s[i]-'0']++;
    for( int i=0; i<10; i++ )
        if( a[i] ) cout<<i<<":"<<a[i]<<endl;

}
