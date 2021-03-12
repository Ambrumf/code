#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char cc[1000][1000];
int main()
{
    //freopen("data.in","r",stdin);
    //freopen("data.out","w",stdout);
    string a,b,c,d;
    bool first=1;
    while(cin>>a){
        if(a=="#")break;
        if(!first)printf("\n");
        first=0;
        memset(cc,0,sizeof(cc));
        cin>>b;
        bool ok1=0,ok2=0;
        int x1,y1,x2,y2;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]){ok1=1;x1=i;y1=j;break;}
            }
            if(ok1)break;
        }
        cin>>c>>d;
        for(int i=0;i<c.size();i++){
            for(int j=0;j<d.size();j++){
                if(c[i]==d[j]){ok2=1;x2=i;y2=j;break;}
            }
            if(ok2)break;
        }        
        if(ok1==0 || ok2==0){
            printf("Unable to make two crosses\n");
        }
        else {

            int len=a.size()+c.size()+3;
            int h=max(y1,y2);
            int left=max(b.size()-y1-1,d.size()-y2-1);
            int hei=h+left+1;
            int maxx=a.size()+3+x2;
            int miny=h-y2,maxy=h-y2+d.size()-1;
            for(int j=0;j<a.size();j++)cc[h][j]=a[j];
            for(int j=0;j<a.size()+c.size()+3;j++)cc[h][j+a.size()+3]=c[j];
            for(int j=h-y1;j<h-y1+b.size();j++)cc[j][x1]=b[j-h+y1];
            for(int j=h-y2;j<h-y2+d.size();j++)cc[j][a.size()+3+x2]=d[j-h+y2];
            for(int i=hei-1;i>=0;i--){
                int flag=0;
                for(int j=len-1;j>=0;j--){
                    if(cc[i][j])flag=1;
                if(flag && !cc[i][j])cc[i][j]=' ';
                }
            }
            for(int i=0;i<hei;i++)
                for(int j=0;j<len;j++){
                    if(cc[i][j])printf("%c",cc[i][j]);
                    if(!cc[i][j]){printf("\n");break;}
                    if(j==len-1)printf("\n");
                    //if(i<miny || i>maxy){printf("\n");break;}
                    //else if(j>maxx){printf("\n");break;}
                }
        }
    }
    return 0;
}
//hei求错了,求剩余长度时字符还未排列好
//结束判断和输出空格反了
//未注意到每行输出最后一个字符后就换行