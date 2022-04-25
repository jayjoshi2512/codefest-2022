#include <iostream>
using namespace std;
int main()
{
    int n, paytm_prices[n], min_index = 0, max_index = 0, min = paytm_prices[0], max = paytm_prices[0];
    cout << "Enter number of values : ";
    cin >> n;
    cout << "Enter Values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> paytm_prices[i];
    }
    for (int i = 0; i <= n; i++)
    {
        if (paytm_prices[i] < min)
        {
            min = paytm_prices[i];
            min_index = i;
        }
    }
    for (int i = min_index; i < n; i++)
    {
        if (paytm_prices[i] > max)
        {
            max = paytm_prices[i];
            max_index = i;
        }
    }
    float time = 570;

    time = (time + (max_index * 10)) / 60;

    cout << " [ " << paytm_prices[max_index] - paytm_prices[min_index] << " , " << int(time) << ":" << (time - int(time)) * 60 << endl;
}