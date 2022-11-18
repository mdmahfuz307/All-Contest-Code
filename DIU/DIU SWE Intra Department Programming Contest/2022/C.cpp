#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout << "";
        cin >> n;

        /*Scan array elements */
        int arr[n];
        cout << "";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << "";
        for (int i = 0; i < n; i = i + 2)
        {
            cout << arr[i] << " ";
        }
    }
}