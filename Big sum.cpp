#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long int> x(n);

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        sum = sum + x[i];
    }

    cout << sum;

    return 0;
}
