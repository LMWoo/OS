// https://www.acmicpc.net/problem/11657

#include <climits>
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Edge
{
    int s;
    int e;
    int w;
    Edge(int s, int e, int w)
    {
        this->s = s;
        this->e = e;
        this->w = w;
    }
};

vector<Edge> vec;
long long dist[501];
int A, B, C;

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    for (int i = 1; i <= M; ++i)
    {
        scanf("%d %d %d", &A, &B, &C);
        vec.push_back(Edge(A, B, C));
    }
    
    for (int i = 1; i <= N; ++i)
    {
        dist[i] = INT_MAX;
    }
    
    dist[1] = 0;
    
    for (int i = 1; i <= M; ++i)
    {
        for (int j = 0; j < vec.size(); ++j)
        {
            int s = vec[j].s;
            int e = vec[j].e;
            int w = vec[j].w;
            
            if (dist[s] != INT_MAX && dist[e] > dist[s] + w)
            {
                if (i == M)
                {
                    printf("%d", -1);
                    return 0;
                }
                dist[e] = dist[s] + w;
            }
        }
    }
    
    
    for (int i = 2; i <= N; ++i)
    {
        if (dist[i] == INT_MAX)
        {
            printf("%d\n", -1);
        }
        else
        {
            printf("%lld\n", dist[i]);
        }
    }
    
    return 0;
}
