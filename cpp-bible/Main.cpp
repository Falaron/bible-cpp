# include "class/Headers.hpp"


void Vector(int vectorSize) {
    const vector<float>constVector;
    vector<int>vectorName (vectorSize); /* ALL VECTOR VALUES ARE EQUAL TO 0 */

    vectorName[2] = 5;

    for (int i = 0; i < vectorSize; i++) {
        if (vectorName[i] == 0) vectorName[i]++; else vectorName[0]--;
        cout << vectorName[i] << endl;
    }
    // shall print 1 1 5 1 1
}

int main()
{
    First first;
    Second second;
    Initialisation init(5,5);

    Vector(5);
}