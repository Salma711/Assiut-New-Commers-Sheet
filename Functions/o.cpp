#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

bool isprime(ll n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void maxmin(int a[], int n)
{
    // int min = a[0], max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[0])
        {
            swap(a[i], a[0]);
        }
        else if (a[i] < a[1])
        {
            swap(a[i], a[1]);
        }
    }
}

bool pal(int n)
{
    int d = 0;
    int temp = n;
    while (temp)
    {
        d = d * 10 + temp % 10;
        temp /= 10;
    }
    return n == d;
}

int div(int n)
{
    int cn = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cn++;
            else
                cn += 2;
        }
    }
    return cn;
}

int main()
{
    int n, pa = 0, pr = 0, d = 0, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (pal(a[i]))
            pa++;
        if (isprime(a[i]))
            pr++;
        if(div(a[i]) > d){
            d = div(a[i]);
            m = a[i];
        }
        else if (div(a[i]) == d){
            m = max(a[i], m);
        }
    }
    maxmin(a, n);
    cout << "The maximum number : " << a[0] << "\nThe minimum number : " << a[1]
         << "\nThe number of prime numbers : " << pr << "\nThe number of palindrome numbers : " << pa
         << "\nThe number that has the maximum number of divisors : "<<m;
}