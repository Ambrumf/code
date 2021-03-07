#include <iostream>  
#include <string.h>  
#include <algorithm>  
#include <cstdio>  
#include <math.h>  
#include <vector>
using namespace std;
const int N = 100000 + 10;
int useless(int nsd)
{
    int n, t;
    cin >> n;
    t = n;
    vector<string>vec1, vec2;
    while (t--) {
        string temp;
        cin >> temp;
        cin >> temp;
            vec1.push_back(temp);
        cin >> temp;
    }
    return 0;
}
struct Node {
    int l, r, v;
}node[N * 4];
void Init(int vsd, int le, int ri) {     
    if (le == ri) {
        node[vsd].l = le;
            node[vsd].r = ri;
        node[vsd].v = 0;
        return;
    }
    int mid = (le + ri) >> 1;
        int ne = vsd << 1;
    Init(ne, le, mid);
    Init(ne + 1, mid + 1, ri);
    
    
    
          node[vsd].l = le;
    node[vsd].r = ri;
    node[vsd].v = 0;
}
void insert(int vsd, int le, int ri, int add) {    
    if ((node[vsd].l == le)
        
        && node[vsd].r == ri) {

             node[vsd].v += add;
        return;
    }
    int tsd = (node[vsd].l + node[vsd].r) >> 1;
    int fy = vsd << 1;
   


    if (ri <= tsd) {
        insert(fy, le, ri, add);
    }
    else if (le > tsd) {
        insert(fy + 1, le, ri, add);
    }
       



    else
    {
        insert(fy, le, tsd, add);
        insert(fy + 1, tsd + 1, ri, add);
    }
}
void print(int vsd) {
    if (node[vsd].l == node[vsd].r) {
        cout <<  node[vsd].v << " "  ;
        return;
    }
        int fs = vsd << 1;
   node[fs].v += node[vsd].v;
        print(fs);
    node[fs + 1].v += node[vsd].v;
    print(fs + 1);
}
int main() {
    int ns, md, i, a1, b2, c3;
    while (cin >> ns >> md) {
        Init(1, 1, ns);
        for (i = 0; i < md; i++) {
            cin >> a1 >> b2 >> c3;
            insert(1, a1, b2, c3);
        }
        print(1);
        cout << endl;
    }
    return 0;
}