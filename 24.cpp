#include<iostream>
#include<cstdlib>
using namespace std;
/*ָ����Ҫ����+-���������
��+-��E֮������ֱ�������    ����ָ���Ĵ�Сȷ��С�����λ�ú���Чλ��
*/
int main()
{
    char s[10086],zs[10086];
    int i,j,expon;
    j = 0;
    cin>>s;
    //��+-��E֮������ֱ�������
    for( i=0; s[i]!='E'; i++ ){
        if( s[i]!='+'&&s[i]!='-'&&s[i]!='.' )
            zs[j++] = s[i];
    }
    expon = atoi(s+i+1);
    if( s[0]=='-' ) cout<<"-";
    if( expon>=0 )
    {
        for( i=0; i<j; i++ ){
            cout<<zs[i];
            //��i=j-1��ʱ����Ҫ���С���㣬��������Ҫ�����
            if( i==expon&&i!=j-1 ) cout<<".";
        }
        while( i<=expon ){
            cout<<"0"; i++;
        }
    }
    else{
        expon = -expon;
        cout<<"0.";
        //expon-1��0
        for( i=1; i<expon; i++ ) cout<<"0";
        for( i=0; i<j; i++ ) cout<<zs[i];
    }
}
