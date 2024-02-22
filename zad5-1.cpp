#include <iostream>

using namespace std;
// biorac pod uwage to co Pan mowil postanowilem uczyc sie i pisac tez w c++

int main()
{
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};
    int i;
    int d;

    cout << "Podaj liczbe naturalna" << endl;
    cin >> d;

    cout << "Zawartosc tablicy przed rotacja" << endl;
    for (i = 0; i < n; i = i + 1)
    {

        cout << arr[i] << " ";
    }
    // Tablica tymczasowa o rozmiarze d

    int temp[d];

    // Przeniesienie pierwszych d elementów do tablicy tymczasowej

    for (int j = 0; j < d; j++)
    {

        temp[j] = arr[j];
    }
    cout << endl;

    // Wyświetlenie zawartości tablicy tymczasowej

    cout << "Zawartosc tablicy tymczasowej" << endl;

    for (i = 0; i < d; i = i + 1)
    {

        cout << temp[i % n] << " ";
    }
    // Przesunięcie pozostałych elementów o d miejsca w lewo

    for (i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    

    for (i = n - d; i < n; i++)
    {
        arr[i] = temp[(i + d) % n];
    }

    cout << endl;
    cout << "Zawrtosc tablicy po rotacji " << endl;
    for (i = 0; i < n; i = i + 1)
    {
        cout << arr[i] << " ";
    }
}
