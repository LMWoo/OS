// https://www.acmicpc.net/problem/2655

#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

struct Brick
{
    int S;
    int H;
    int W;
    int pos;
    
    Brick(int S, int H, int W, int pos)
    {
        this->S = S;
        this->H = H;
        this->W = W;
        this->pos = pos;
    }
    
    bool operator<(const Brick& temp) const
    {
        return this->S > temp.S;
    }
};

struct DP{
    int W;
    int H;
    int prev;
    int pos;
    
    DP(int W, int H, int pos)
    {
        this->W = W;
        this->H = H;
        this->prev = -1;
        this->pos = pos;
    }
};

vector<Brick> vec(101, Brick(0, 0, 0, 0));
vector<DP> dp(101, DP(0, 0, 0));

int N;
int S, H, W;

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d %d", &S, &H, &W);
        Brick temp(S, H, W, i);
        vec[i] = temp;
    }

    sort(vec.begin(), vec.end());
    
    dp[0].W = vec[0].H;
    dp[0].H = 1;
    dp[0].pos = vec[0].pos;
    
    DP max_dp = dp[0];
    
    for (int i = 1; i < vec.size(); ++i)
    {
        Brick curr = vec[i];
        dp[i].W = curr.H;
        dp[i].H = 1;
        dp[i].pos = curr.pos;
        
        for (int j = 0; j < i; ++j)
        {
            Brick temp = vec[j];
            
            if (curr.W < temp.W)
            {
                if (dp[i].W < dp[j].W + curr.H)
                {
                    dp[i].W = dp[j].W + curr.H;
                    dp[i].H = dp[j].H + 1;
                    dp[i].prev = j;
                }
            }
        }
        
        if (max_dp.W < dp[i].W)
        {
            max_dp = dp[i];
        }
    }

    printf("%d\n",max_dp.H);
    while(true)
    {
        printf("%d\n", max_dp.pos + 1);

        if (max_dp.prev == -1)
        {
            break;
        }
        
        max_dp = dp[max_dp.prev];
    }
    return 0;
}
