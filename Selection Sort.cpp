#include <iostream>
#include <stdio.h>

using namespace std;

int vet[5];
int Min;
int Max;            
int Posi = 0;


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
        if (i == 0)
        {
            cout << "[ " << vet[i] << ", ";
        }else
        if (i == 4)
        {
            cout << vet[i] << " ]" ;
        }else{
            cout << vet[i] << ", " ;
        }
           
    }

    //Selection Sort

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (vet[i] > vet[j])
            {
                Max = vet[i];//4
                
                Min = vet[j];//1
                

                cout << "Min = " << Min << endl;
                vet[i] = Min;
                vet[j] = Max;
                

                cout << "Max : " << Max << endl;
            }
                
        }
        

 
    }

    
        
    
    // end
    
    
    cout << "your new array is : " << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            cout << "[ " << vet[i] << ", ";
        }else
        if (i == 4)
        {
            cout << vet[i] << " ]" ;
        }else{
            cout << vet[i] << ", " ;
        }
           
    }

    

    return 0;
}
