#include<iostream>
#include<algorithm>
#include<iomanip>
//�Ե��۽�������ÿһ����ѡȡ����������Ʒ���ۼ��ɵõ����ֵ
using namespace std;
struct cake{
    float s,m,pm;//��� ���ۼ� ����
}*mooncake;
bool cmp( struct cake a, struct cake b )
{
    return a.pm>b.pm;
}
int main()
{
    int n,d;
    float t1,t2,maxs;
    cin>>n>>d;
    mooncake = new struct cake[n];
    maxs = 0.0;
    for( int i=0; i<n; i++ )
        cin>>mooncake[i].s;
    for( int i=0; i<n; i++ )
    {
        cin>>mooncake[i].m;
        mooncake[i].pm = mooncake[i].m / mooncake[i].s;
    }
    sort(mooncake,mooncake+n,cmp);
    for( int i=0; i<n&&d>0; i++ )
    {
        if( d>=mooncake[i].s )
        {
            maxs += mooncake[i].m;
            d -= mooncake[i].s;
        }
        else{//��dС��ĳ����Ʒ�Ŀ��ʱ��ζ���Ѿ��������һ��
            maxs += mooncake[i].pm * d;
            d = 0;
        }
    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<maxs;
    delete [] mooncake;
}
