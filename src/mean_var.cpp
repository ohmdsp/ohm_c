#include<iostream>
#include<cmath>

using namespace std;

//float average(const float array[], int size)
//float variance(const float array[], int size)


float average( float array[], int size)
{
    float sum = array[0];	// initialize array for sum
    for (int i = 1; i < size; i++)
	sum = sum + array[i];
    return (sum / size);
}

float variance( float array[], int size)
{
    float sum = array[0];
    float sum2 = array[0] * array[0];
    for (int i = 1; i < size; i++)
    {
        sum = sum + array[i];
        sum2 = sum2 + array[i] * array[i];
    }
  
    float ave = sum / size;
    return (( sum2 - sum * ave)/(size - 1));
}

int main()
{
    float signal[5] = {12.5, 7.0, 10.0, 7.8, 15.5};
    int count = 5;

    float ave = average(signal, count);
    cout << "\nAverage = " << ave << endl;
    float var = variance(signal, count);
    cout << "\nVariance = " << var << endl;
  
    return 0;
}









 

