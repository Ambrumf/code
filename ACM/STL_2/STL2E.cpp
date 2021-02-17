#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <cstring>
using namespace std;
typedef long long ll;
ll player[1000], card[6];
int main()
{
    ll n, k = 0, dice, now, l, r, mode, cnt, pile,pos;
    //mode1 win ; mode 0 break;
    string t;
    while (cin >> n)
    {
        if (!n)
            break;
        cnt = mode = pile = now = pos = 0;
        for (int i = 0; i < n; i++)
        {
            player[i] = i+1;
            card[i] = 3;
        }
        cin >> t;
        dice = min((ll)3, card[now]);
        while(pos<=t.size()){
            if(n==1){mode=1;break;}
            if(!card[now]){
                now=(now+1)%n;
                dice=min(3ll,card[now]);
                if(t.size()-pos<dice)break;
                continue;
            }
            if (!dice)
            {
                now = (now + 1) % n;
                dice = min(3ll, card[now]);
                if (t.size() -pos< dice )break;
                continue;
            }
            if(pos==t.size())break;
            if(t[pos]== '.'){pos++;dice--;continue;}
            else if(t[pos]=='L'){
                pos++;
                l = (now + 1) % n;
                card[now]--;
                if(card[now]==0)cnt++;
                card[l]++;
                if (card[l] == 1)
                    cnt--;
                if (cnt == n - 1)
                {
                    mode = 1;
                    break;
                }
            }
            else if (t[pos] == 'R')
            {
                pos++;
                r = (now + n-1) % n ;
                card[now]--;
                if(card[now]==0)cnt++;
                card[r]++;
                if (card[r] == 1)
                    cnt--;
                if (cnt == n - 1)
                {
                    mode = 1;
                    break;
                }
            }
            else if (t[pos] == 'C')
            {
                pos++;
                card[now]--;
                if(card[now]==0)cnt++;
                pile++;
            }
            dice--;
        }
        k++;
            printf("Game %lld:\n", k);
            if (mode)
            {
                for (int i = 0; i < n; i++)
                {
                    printf("Player %lld:%lld", player[i], card[i]);
                    if (card[i])
                        printf("(W)");
                    printf("\n");
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("Player %lld:%lld", player[i], card[i]);
                    if (i == now)
                        printf("(*)");
                    printf("\n");
                }
            }
            printf("Center:%lld\n", pile);
    }
    return 0;
}
