#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    for(double i = 0; i <= 2.0; i += 0.2)
        for(int j = 1; j <= 3; j++)
            cout << "I=" << i << " J=" << j + i << endl;

    return 0;
}
