#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

map<string, int> DS, DE;
string Start = "", End = "1238004765";

string S_Left(string S)
{
    string T = "";
    T = T + S[3] + S[0] + S[2] + S[7] + S[4] + S[1] + S[6] + S[8] + S[5] + S[9];
    return T;
}

string S_Right(string S)
{
    string T = "";
    T = T + S[0] + S[4] + S[1] + S[3] + S[8] + S[5] + S[2] + S[7] + S[9] + S[6];
    return T;
}

string E_Left(string S)
{
    string T = "";
    T = T + S[1] + S[5] + S[2] + S[0] + S[4] + S[8] + S[6] + S[3] + S[7] + S[9];
    return T;
}

string E_Right(string S)
{
    string T = "";
    T = T + S[0] + S[2] + S[6] + S[3] + S[1] + S[5] + S[9] + S[7] + S[4] + S[8];
    return T;
}

void BFS_S(string S)
{
    queue<string> Q;
    Q.push(S);
    DS[S] = 0;

    while (!Q.empty())
    {
        string u = Q.front();
        Q.pop();

        string A = S_Left(u);
        string B = S_Right(u);

        if (!DS.count(A))
        {
            DS[A] = DS[u] + 1;
            Q.push(A);
        }

        if (!DS.count(B))
        {
            DS[B] = DS[u] + 1;
            Q.push(B);
        }

        if (DS[Q.back()] >= 15)
            break;
    }
}

void BFS_E(string S)
{
    queue<string> Q;
    Q.push(S);
    DE[S] = 0;

    while (!Q.empty())
    {
        string u = Q.front();
        Q.pop();

        if (DS.count(u))
        {
            cout << DS[u] + DE[u];
            return;
        }

        string A = E_Left(u);
        string B = E_Right(u);

        if (!DE.count(A))
        {
            DE[A] = DE[u] + 1;
            Q.push(A);
        }

        if (!DE.count(B))
        {
            DE[B] = DE[u] + 1;
            Q.push(B);
        }

        if (DE[Q.back()] >= 15)
            break;
    }
}

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        int a;
        cin >> a;
        Start = Start + char(a + '0');
    }

    BFS_S(Start);
    BFS_E(End);

    return 0;
}
    
