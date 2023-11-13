#include <iostream>
#include <fstream>
using namespace ::std;
int i, j;
double sum;

double calculate(int n, int x)
{
    if (x <= 0)
    {

        double y = 1; int i = 0;
        for (i = 0; i <= n - 1; i++)
            y = y * ((i * i * i) + x);
        return y;
    }
    else
    {
        double y = 0, i = 1, j = 0, sum = 0;

        while (i <= n - 1)
        {
            sum = 0, j = 0;
            for (j = 0; j <= (n - 1); j++)
                sum = sum + (x / (static_cast<double>(i) + j));
            i++;
            y += sum;

        }
        return y;
    }
}

void checkValidInput()
{

    if (cin.fail())
    {
        throw "Incorrect input data";
    }
}
void checkParamN(int n)
{
    if (n < 2)
    {
        throw "Incorrect input data";
    }
}

void checkParamAB(int a, int b)
{
    if (b < a)
    {
        throw "Incorrect input data";
    }
}

void checkParamH(int h)
{
    if (h <= 0)
    {
        throw "Incorrect input data";
    }
}

int main()
{
    try
    {
        cout << "Enter n: ";
        int n;
        cin >> n;
        checkValidInput();
        checkParamN(n);

        cout << "Enter a: ";
        int a;
        cin >> a;
        checkValidInput();

        cout << "Enter b: ";
        int b;
        cin >> b;
        checkValidInput();

        checkParamAB(a, b);

        cout << "Enter h: ";
        int h;
        cin >> h;
        checkValidInput();
        checkParamH(h);

        cout << "\n";

        int x = a;

        while (x <= b)
        {
            double y = calculate(n, x);

            cout << "x = " << x << endl;
            cout << "y = " << y << endl << endl;

            x += h;
        }
    }
    catch (const char* ex)
    {
        cout << "\n";
        cout << ex << endl;
        cout << "Error." << endl;
        return 1;
    }
    catch (...)
    {
        cout << "\n";
        cout << "Error." << endl;
        return 1;
    }
}
