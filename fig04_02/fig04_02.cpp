#include <iostream>
using namespace std;

int main()
{
    int counter{ 1 };
    do {
        cout << counter << " ";
        ++counter;
    } while (counter <= 10);
    cout << "\n";
}

