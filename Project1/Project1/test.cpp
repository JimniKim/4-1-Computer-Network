#include <iostream>

#include <stdint.h>
#include <bitset>

using namespace std;

int main()
{
    uint32_t temp = 0xffd6e514;
    uint8_t lenght = 15;

    uint32_t result = (temp >> (32 - lenght))<< (32 - lenght);
    cout << bitset<32>(temp) << "\n";
    cout << bitset<32>(result) << "\n";

    return 0;

}