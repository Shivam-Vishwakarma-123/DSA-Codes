#include <iostream>
using namespace std;

#include <bits/stdc++.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int solveusingrecursion(int weight[], int value[], int index, int capacity)
{
    // base case agar ek hi item ho
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }
    // yha index aur capacity dono change ho rhi he to 2 d dp ;
    int include = 0;
    if (weight[index] <= capacity)
    {
        include = value[index] + solveusingrecursion(weight, value, index - 1, capacity - weight[index]);
    }
    int exclude = 0 + solveusingrecursion(weight, value, index - 1, capacity);
    return max(include, exclude);
}
int solveusingmemo(int weight[], int value[], int index, int capacity, vector<vector<int>> &dp)
{
    // base case agar ek hi item ho
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }
    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }
    // yha index aur capacity dono change ho rhi he to 2 d dp ;
    int include = 0;
    if (weight[index] <= capacity)
    {
        include = value[index] + solveusingmemo(weight, value, index - 1, capacity - weight[index], dp);
    }
    int exclude = 0 + solveusingmemo(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}
int solveusingtabulation(int weight[], int value[], int n, int capacity)
{
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));
    for (int w = weight[0]; w <= capacity; w++)
    {
        if (weight[0] <= capacity)
        {
            dp[0][w] = value[0];
        }
        else
        {
            dp[0][w] = 0;
        }
    }
    // index traversing from n-1 to 0 so yha ulta
    for (int index = 1; index < n; index++)
     {    
        for (int wt = 0; wt <= capacity; wt++)
        {
            int include = 0;
            if (weight[index] <= wt)
            {
                include = value[index] + dp[index - 1][wt - weight[index]];
            }
            int exclude = 0 + dp[index - 1][wt];
            dp[index][wt] = max(include, exclude);
            cout<<"infinte"<<endl;
        }
    }
   return dp[n - 1][capacity];
}
int solveusingtabulation(int weight[], int value[], int n, int capacity)
{
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));
    
    // Initialize the first row of the dp table
    for (int w = 0; w <= capacity; ++w)
    {
        if (weight[0] <= w)
        {
            dp[1][w] = value[0];
        }
        else
        {
            dp[1][w] = 0;
        }
    }

    // Fill the dp table
    for (int index = 1; index < n; ++index)
    {
        for (int wt = 0; wt <= capacity; ++wt)
        {
            int include = 0;
            if (weight[index] <= wt)
            {
                include = value[index] + dp[index][wt - weight[index]];
            }
            int exclude = dp[index - 1][wt];
            dp[index + 1][wt] = max(include, exclude);
        }
    }
    
    return dp[n][capacity];
}
int main()
{
    int weight[] = {4, 5, 1};
    int value[] = {1, 2, 3};
    int n = 3;
    int capacity = 4;
    // cout<<solveusingrecursion(weight,value,2,capacity);
    vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));
    cout <<solveusingtabulation(weight,value,  n,  capacity);

    return 0;
}