#include<iostream>
#include<iomanip>
//������ʱҪע������ת��
using namespace std;
int main()
{
    int n,k,d,cnt,cnt1,cnt2;//cnt ��ʾ����e�ĸ���   cnt1 ���ܿ���  cnt2 ����
    double e,*f;
    cin>>n>>e>>d;
    cnt1 = cnt2 =0;
    for( int i=0; i<n; i++ ){
        cin>>k;
        cnt = 0;
        f = new double[k];
        for( int j=0; j<k; j++ ){
            cin>>f[j];
            if( f[j]-e<0 ) cnt++;
        }
        if( cnt>k/2 && k>d  ) cnt2++;
        else if( cnt>k/2 ) cnt1++;
        delete []f;
    }

    cout<<setiosflags(ios::fixed)<<setprecision(1)<<1.0*cnt1/n*100<<"% "<<1.0*cnt2/n*100<<"%"<<endl;
}
