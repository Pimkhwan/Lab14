#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[], int N, double B[])
{
    double sum = 0, result = 0, multiply = 1, harmonic = 0, max, min = 1;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }

    for (int i = 0; i < N; i++)
    {
        result += (A[i] - sum/N) * (A[i] -sum/N);
    }

    for (int i = 0; i < N; i++)
    {
        multiply *= A[i];
    }

    for (int i = 0; i < N; i++)
    {
        harmonic = harmonic + 1 / A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
        else
        {
            max = max;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
        else
        {
            min = min;
        }
    }

    B[0] = sum / N;
    B[1] = sqrt(result / N);
    B[2] = pow(multiply,1.0/N);
    B[3] = N / harmonic;
    B[4] = max;
    B[5] = min;
}