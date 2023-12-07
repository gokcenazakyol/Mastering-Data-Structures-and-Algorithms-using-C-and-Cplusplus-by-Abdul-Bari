#include <iostream>
using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    // integer takes 4 bytes 
    cout << sizeof(A)<<endl;

    // foreach loop
    for (int x:A)
    {
        cout<<x<<endl;
    }

    // printf is for C language
    printf("%d\n", A[2]);

    int B[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        cout<< B[i]<<endl;
    }

    // size of an array may not be initialized
    int C[] = {2, 4, 6};
    cout<< C[1]<<endl;

    // if you have initialized a few values, the rest will be 0
    int D[10] = {2, 4, 6, 8, 10, 12, 14};
    cout<< D[8]<<endl;
    cout<< D[9]<<endl;

    // garbage values are values that you are not initialized
    int E[10];
    E[0] = 12;

    // garbage values
    for (int i = 0; i < 10; i++)
    {
        cout<< E[i]<<endl;
    }

    return 0;
}