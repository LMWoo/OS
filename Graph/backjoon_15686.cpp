// https://www.acmicpc.net/problem/15686

#include <climits>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;
int arr[14];
int input[51][51];
int out = INT_MAX;

vector<pair<int, int>> H;
vector<pair<int, int>> C;

void DFS(int s, int L)
{
    if (L == M)
    {
        int i, j;
        int sum = 0;
        
        for (i = 0; i < H.size(); ++i)
        {
            int min_dist = INT_MAX;
            for (j = 0; j < L; ++j)
            {
                pair<int, int> H_point = H[i];
                pair<int, int> C_point = C[arr[j]];
                int dist = abs(H_point.first - C_point.first) +
                    abs(H_point.second - C_point.second);
                min_dist = min(min_dist, dist);
            }
            sum += min_dist;
        }
        out = min(out, sum);
        
        return;
    }
    else
    {
        for (int i = s; i < C.size(); ++i)
        {
            arr[L] = i;
            DFS(i + 1, L + 1);
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            scanf("%d", &input[i][j]);
            if (input[i][j] == 1)
            {
                H.push_back(make_pair(i, j));
            }
            else if (input[i][j] == 2)
            {
                C.push_back(make_pair(i, j));
            }
        }
    }

    
    DFS(0, 0);
    printf("%d", out);
    return 0;
}
