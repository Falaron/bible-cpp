# include "class/Headers.hpp"


void Vector(int vectorSize) {
    const vector<float>constVector;                     // empty vector && const vector
    vector<int> vectorOne(vectorSize);                  // n VALUES are equal to 0
    vector<string> vectorTwo(vectorSize, "hello");      // n VALUES are equal to 0.5
    vector<int> vectorThree{2, 2, 1, 5};           // vector with specific values
    
    cout << "vectorName = ";
    vectorOne[2] = 5;
    for (int i = 0; i < vectorOne.size(); i++) {
        if (vectorOne[i] == 0) vectorOne[i]++; else vectorOne[0]--;
        cout << vectorOne[i] << " ";
    }


    cout << "\n\n" << "vectorOne = ";
    for (string i : vectorTwo) cout << i << " ";


    cout << "\n\n" << "vectorThree = ";
    for (auto &i : vectorThree) cout << i << " ";


    cout << "\n\n" << "vectorThree = ";
    vectorThree = vectorOne;
    for (auto &i : vectorThree) cout << i << " ";


    cout << "\n\n";
}

void Tables()
{
    float table[10];
    int tableNotDeclared[] = { 12, 5 };     // Table contains 2 elements
    float notes[4] = {5, 3, 2.5};        // Table contains 4 elements (only 3 declared)
    int tableTwoDimensions[5][3];        // Table two dimensions

    for (float note : notes)cout << note << " ";

    for (auto & col : tableTwoDimensions)
        for (auto i : col)
        { /*element e */ }
}

int main()
{
    First first;
    Second second;
    Initialisation init(5,5);

    //Vector(5);
    Tables();
}