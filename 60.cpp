#include<iostream>
#include<algorithm>
using namespace std;
bool cmp( int a, int b )
{
    return a>b;
}
int main()
{
    int n,maxnum,l,r,m,cnt,a[100008];
    cin>>n;
    for( int i=0; i<n; i++ )
        cin>>a[i];
    sort(a,a+n,cmp);
    maxnum = 0;
    for( int i=0; i<n; i++ ){//��������
        //a[i]��0��i�������е���Сֵ,i+1�Ǵ���a[i]������
        //a[i]>i+1 ���ܱ�֤��E�쳬��E������һ������ҵ�����E
        if( a[i]>i+1 ) maxnum = i+1;
    }

    cout<<maxnum;
}
