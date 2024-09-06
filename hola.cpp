#include <iostream>

using namespace std;

int main()
{
    uint16_t a = 7;
    uint16_t b = 3;

    uint16_t result = a ^ b;
    cout << result << "=" << bitset<16>(result) << endl;

    uint16_t carry = (a & b) << 1;
    cout << carry << " Carry =" << bitset<16>(carry) << endl;

    while (carry != 0)
    {
        uint16_t temp = result;
        result = result ^ carry;
        carry = (temp & carry) << 1;
        cout << result << "=" << bitset<16>(result) << endl;
        cout << carry << " Carry =" << bitset<16>(carry) << endl;
    }

    return 0;
}
