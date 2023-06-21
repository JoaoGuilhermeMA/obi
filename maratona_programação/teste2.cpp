#include <iostream>

using namespace std;

int main()
{
    float A = 0, B = 0, C = 0, equivalencia = 0;
    char op;
    
    do
    {
        cin >> A >> B >> C;
    } while ((A < 0 && B < 0 && C < 0) || (A > 1000000000000000 && B > 1000000000000000 && C > 1000000000000000));

    cin >> op;
    if (op == 'A')
    {
        equivalencia += A;
        if (B >= 0)
        {
            equivalencia += (B * 3) / 2;
        }
        if (C >= 0)
        {
            equivalencia += (C * 5) / 2;
        }
    }
    else if (op == 'B')
    {
        equivalencia += B;
        if (A >= 0)
        {
            equivalencia += (B * 3) / 3;
        }
        if (C >= 0)
        {
            equivalencia += (C * 5) / 3;
        }
    }
    else if (op == 'C')
    {
        equivalencia += C;
        if (A >= 0)
        {
            equivalencia += (A * 2) / 5;
        }
        if (B >= 0)
        {
            equivalencia += (B * 3) / 5;
        }
    }

    cout <<  static_cast<int>(equivalencia) << "\n";
    return 0;
}
