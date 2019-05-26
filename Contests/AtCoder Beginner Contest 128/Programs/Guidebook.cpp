#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define all(v) (v).begin(), (v).end()

struct restaurant
{
    int index, rating;
    string name;

    restaurant(int i, int r, string S)
    {
        index = i, rating = r, name = S;
    }

    const int operator <(const restaurant &R)
    {
        if(name == R.name)
        {
            return (rating > R.rating);
        }
        else
        {
            return (name < R.name);
        }
    }
};

int main()
{
    int no_of_restaurants;
    cin >> no_of_restaurants;

    vector <restaurant> R;
    for(int i = 1; i <= no_of_restaurants; i++)
    {
        string name;
        int rating;

        cin >> name >> rating;

        R.push_back(restaurant(i, rating, name));
    }

    sort(all(R));

    for(int i = 0; i < no_of_restaurants; i++)
        cout << R[i].index << endl;

    return 0;
}
