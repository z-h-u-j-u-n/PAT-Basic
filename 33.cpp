#include<iostream>
#include<cstdio>
//������cin��ȡ�ַ���  ��Ϊ��һ�л��ļ������ǿյ�
//��Ҫע�⵱�����ַ����������ʱ����Ҫ������У�����oj����û�п������������
using namespace std;
int main()
{
    int i,j,cnt,iswrong[41]={0};
    char s[100008],k[100008];
    cin.getline(s,100008);
    cin.getline(k,100008);
    //cin>>s>>k;
    cnt = 0;
    for( i=0; s[i]; i++ ){
        if( s[i]>='0'&&s[i]<='9' ) iswrong[s[i]-'0'] = 1;
        if( s[i]>='A'&&s[i]<='Z' ) iswrong[s[i]-'A'+10] = 1;
        if( s[i]=='_' ) iswrong[36] = 1;
        if( s[i]==',' ) iswrong[37] = 1;
        if( s[i]=='.' ) iswrong[38] = 1;
        if( s[i]=='-' ) iswrong[39] = 1;
        if( s[i]=='+' ) iswrong[40] = 1;
    }
    for( i=0; k[i]; i++ ){
        if( k[i]>='0'&&k[i]<='9' ){
            if( iswrong[k[i]-'0']==0 ){
                cout<<k[i]; cnt++;
            }

        }
        if( k[i]>='a'&&k[i]<='z' ){
            if( iswrong[k[i]-'a'+10]==0 ){
                cout<<k[i]; cnt++;
            }

        }
        if( k[i]>='A'&&k[i]<='Z' ){
            if( iswrong[k[i]-'A'+10]==0&&iswrong[40]==0 ){
                cout<<k[i]; cnt++;
            }

        }
        if( k[i]=='_' ){
            if( iswrong[36]==0 ){
                cout<<k[i]; cnt++;
            }

        }
        if( k[i]==',' ){
            if( iswrong[37]==0 ){
                cout<<k[i]; cnt++;
            }

        }
        if( k[i]=='.' ){
            if( iswrong[38]==0 ){
                cout<<k[i]; cnt++;
            }

        }
        if( k[i]=='-' ){
            if( iswrong[39]==0 ){
                cout<<k[i]; cnt++;
            }
        }
    }
    if( !cnt ) cout<<endl;
}
