#include<iostream>
using namespace std;
int b[3] = {100,10,1};
char c[3] = {'B','S','0'};
//ע��cout<<�ַ�+����    ����������Ӧ��ascii��
//��һ��ȫ������᷽��ܶ�
int main()
{
    int n,i,d;
    cin>>n;
    i = 0;
    while( n>0 ){
        d = n/b[i];
        if( d ){
            if( i==2 )
                for( int j=1; j<=d; j++ ){
					char t = c[i]+j;
					cout<<t;
				}
            else{
                for( int j=1; j<=d; j++ )
                    cout<<c[i];
            }
        }
        n = n%b[i];
        i++;
    }
    return 0;
}
