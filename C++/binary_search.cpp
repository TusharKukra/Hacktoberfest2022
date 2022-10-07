#include <iostream>
#include <vector>
using namespace std;
int binary_search(vector<int> v, int l, int h, int x)
{
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (v[m] == x)
        {
            return m;
        }
        if (v[m] < x)
        {
            l = m + 1;
        }
        else if (v[m] > x)
        {
            h = m - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int to_find;
    cin >> to_find;

    // };
    int result = binary_search(v, 0, n - 1, to_find);
    if (result == -1)
    {
        cout << to_find << " not present in array" << endl;
    }
    else
    {
        cout << "element present at index " << result+1 << endl;
    }
}
