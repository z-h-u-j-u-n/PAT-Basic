#include<iostream>
using namespace std;
/*Ҫ������в����ѣ��ؼ����ڰ��շ��ֵ�˳��������ļ�
��һ�����������������˳��
*/
int main()
{//a��������¼ÿ��������״�� b������¼ÿ������Ӧ�����ּ������˳��
    int a[37]={0},b[81],j,t;
    char c,s1[88],s2[88];
    cin>>s1>>s2;
    j = 0;
    for( int i=0; s1[i]; i++ )
    {
        c = s1[i];
        if( c>='a'&&c<='z' ) {
            t = c-'a';
            if( !a[t] )
                b[j++] = t;
            a[t] = 1;
        }
        if( c>='A'&&c<='Z' ) {
            t = c-'A';
            if( !a[t] )
                b[j++] = t;
            a[t] = 1;
        }
        if( c>='0'&&c<='9' ) {
            t = c-'0'+26;
            if( !a[t] )
                b[j++] = t;
            a[t] = 1;
        }
        if( c=='_' ) {
            t = 36;
            if( !a[t] )
                b[j++] = t;
            a[t] = 1;
        }
    }
    for( int i=0; s2[i]; i++ )
    {
        c = s2[i];
        if( c>='a'&&c<='z' ) a[c-'a'] = 0;
        if( c>='A'&&c<='Z' ) a[c-'A'] = 0;
        if( c>='0'&&c<='9' ) a[c-'0'+26] = 0;
        if( c=='_' ) a[36] = 0;
    }
    for( int i=0; i<j; i++ ){
        if( a[b[i]]==1 ){
            if( b[i]>=0&&b[i]<=25 ) cout<<char('A'+b[i]);
            else if( b[i]>=26&&b[i]<=35 ) cout<<b[i]-26;
            else cout<<"_";
        }
    }
}
