#include<iostream>
#include<algorithm>
using namespace std;
/*
ÿ�ζ��Ὣ��������֮�ͳ�2����i�����ӻ����n-i��
Ҫ�����ĺ���󣬱�������������
*/
bool cmp( int a, int b )
{
    return a<b;
}
int main()
{
    int n,result,a[10008];
    cin>>n;
    for( int i=0; i<n; i++ )
        cin>>a[i];
    sort(a,a+n,cmp);
    result = a[0];
    for( int i=1; i<n; i++ )
        result = (result+a[i])/2;
    cout<<result;
}
