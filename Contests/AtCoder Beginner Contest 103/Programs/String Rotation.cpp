#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    int size = S.size(), possible = false;
    for(int r = 0; r < size; r++)
    {
        int matching = true;

        for(int i = 0; i < size; i++)
        {
            if(T[i] != S[(i + r)%size])
                matching = false;
        }

        if(matching) possible = true;
    }

    cout << (possible ? "Yes\n" : "No\n");
    return 0;
}
