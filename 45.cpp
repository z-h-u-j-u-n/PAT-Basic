#include<iostream>
#include<algorithm>
using namespace std;
/*
��������������������ͬ�±�i�Ķ�ӦԪ����Ȳ�����0~i�Ӵ��е����ֵ���ܱ�֤����Ԫ
���Ҫ�������
*/
bool cmp( int a, int b )
{
    return a<b;
}
int main()
{
    int n,j,maxnum,a[100008],b[100008],c[100008];
    cin>>n;
    j = maxnum = 0;
    for( int i=0; i<n; i++ ){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n,cmp);
    for( int i=0; i<n; i++ ){
        if( a[i]==b[i]&&a[i]>maxnum )
            c[j++] = a[i];
        if( maxnum<a[i] ) maxnum = a[i];
    }
    cout<<j<<endl;
    for( int i=0; i<j; i++ ){
        if( i ) cout<<" ";
        cout<<c[i];
    }
    cout<<endl;
}
