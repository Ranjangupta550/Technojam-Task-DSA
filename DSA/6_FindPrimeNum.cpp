#include<iostream>
using namespace std;

void findPrimeNum()
{
    int prime1, prime2, prime3, i;
    cout << "enter two number ";
    cin >> prime1 >> prime2;
    prime3 = prime1;
    if (prime1 > prime2)
    {
        prime3 = prime2;
        prime2 = prime1;
        prime1 = prime3;
    }

    for (prime1; prime1 <= prime2; prime1++)
    {

        for (i = 2; i <= prime1; i++)

        {
            if (prime1 % i == 0)
            {
                break;
            }
        }
        if (i == prime1)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    findPrimeNum();
    
    return 0;
}
