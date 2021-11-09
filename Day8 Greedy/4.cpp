//Author: Sahil Anand
//Problem Link: https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1#
bool cmp(Item a, Item b)
{
    double x1 = (double(a.value) / double(a.weight));
    double x2 = (double(b.value) / double(b.weight));
    return (x1 > x2);
}

class Solution
{
public:
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, cmp);
        double res = 0.0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].weight <= W)
            {
                res = res + (double)arr[i].value;
                W -= arr[i].weight;
            }
            else
            {
                double x = (double(arr[i].value) / double(arr[i].weight));
                res = res + (W * x);
                W = 0;
            }
        }
        return res;
    }
};