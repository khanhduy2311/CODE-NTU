#include <bits/stdc++.h>
using namespace std;
struct Data{
    int x, y, id;
};
bool cmp(const Data &a, const Data &b){
    return a.x < b.x;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    Data a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i].x >> a[i].y;
        a[i].id = i + 1;
    }
    sort(a, a + n, cmp);
    vector<int> res;
    bool check = false;
    int yMax = a[0].y, idMax = a[0].id, j = 0;
    while(check == false){
        int idx = upper_bound(a + j, a + n, Data{x}, cmp) - a;
        bool check2 = false;
        for(int i = j; i < idx; ++i){
            if(a[i].id != 0){
                check2 = true;
                if(a[i].y > yMax){
                    yMax = a[i].y;
                    idMax = a[i].id;
                }
                a[i].id = 0;
            }
        }
        if(check2 == false){
            break;
        }
        res.push_back(idMax);
        if(yMax >= y){
            check = true;
            break;
        }
        else{
            x = yMax;
            j = idx;
        }
    }
    if(check == false){
        cout << -1;
    }
    else{
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); ++i){
            cout << res[i] << " ";
        }
    }
    return 0;
}
