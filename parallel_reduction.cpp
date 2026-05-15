#include<iostream>
#include<omp.h>

using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[100];

    cout << "Enter elements:\n";

    for(int i = 0; i < n; i++)
        cin >> a[i];

    int min = a[0];
    int max = a[0];
    int sum = 0;
    float avg;

    // Parallel Reduction
    #pragma omp parallel for reduction(min:min) reduction(max:max) reduction(+:sum)
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];

        sum += a[i];
    }

    avg = (float)sum / n;

    cout << "\nMinimum = " << min;
    cout << "\nMaximum = " << max;
    cout << "\nSum = " << sum;
    cout << "\nAverage = " << avg;

    return 0;
}


// for run this code , "g++ parallel_reduction.cpp -fopenmp " command is used in terminal.