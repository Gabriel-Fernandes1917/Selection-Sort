#include <iostream>
#include <stdio.h>

using namespace std;

int vet[5];
int changer;

int main(int argc, char const *argv[])
{
    cout << "choice the values to array" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> vet[i];
    }

    cout << "your array is : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << vet[i] << " " ;
    }
    
    

    return 0;
}
