#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, i, j, k = 1, l = 1;
    cin >> n;
    int* w = new int[n];
    for (b = 0; b < n; b++)
    {
        cin >> w[b];
    }
    int max = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (w[j] == w[i])
                {
                    k++;
                    if (k >= l)
                    {
                        l = k;
                        max = l;
                    }
                    else
                    {
                    }
                }
                else
                {
                    k = 1;
                }
            }
        }
    }
    delete[]w;
    cout << max << endl;
    system("pause");
    return 0;
}