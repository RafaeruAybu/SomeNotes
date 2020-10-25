#include    <bitset>
#include    <iostream>
#include    <string>

int main()
{
    std::bitset<8>bits {0b0000'0101};
    bits.set(3);
    bits.flip(4);
    bits.reset(4);
    std::cout<<"All the bits:"<<bits<<'\n';
    std::cout<<"Bit 3 has value:"<<bits.test(3)<<'\n';
    std::cout<<"Bit 4 has value:"<<bits.test(4)<<'\n';
    std::cout<<"shifted = "<< (bits<<1) << std::endl;

    return 0;
}
