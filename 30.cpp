#include<iostream>
#include<algorithm>
/*
�������ٱȽ�
���ʹ�ñ����㷨�Ļ��ض��ᳬʱ
������
10 8
2 3 20 4 5 1 6 7 8 9
�������
1 2  3 4 5 6 7 8 9 20
��һ��ѭ�� i=0 j=8 cnt=8
��ʼ�ڶ��ֵ�ʱ�� i=1 j=i+cnt=8
ǰһ�ֵĵ���ʹ����cnt����һ���ܱ�֤M<=m*p
*/
/*ע����������˿��ܻᳬ��int��Χ  ��Ҫ�ø��󾫶ȵ�����*/
using namespace std;
bool cmp( long long a, long long b )
{
    return a<b;
}
int main()
{
    int n,p,cnt;
    long long a[100086];
    cin>>n>>p;
    for( int i=0; i<n; i++ )
        cin>>a[i];
    sort(a,a+n,cmp);
    cnt = 0;
    for( int i=0; i<n; i++ )
        for( int j=i+cnt; j<n; j++ )
        {
            if( a[j]-a[i]*p>0 ) break;
            if( cnt<j-i+1 ) cnt = j-i+1;
        }
    cout<<cnt;
}
