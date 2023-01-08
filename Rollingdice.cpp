//created by ebrahim zeinali

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    int n =0;
    cout << "please inter n= ";

    cin >> n;

    int* roll = new int[n];
    int Sum = 0;
    srand(time(NULL));
    for(int i = 0 ; i< n ; ++i)
    {

        roll[i]  = rand()%(6-1+1)+1;
        Sum += roll[i];

    }

    cout << Sum/6.0 << endl;
}
