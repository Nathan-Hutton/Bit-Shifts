/*
 * shifts.c
 *
 * A program that demonstrates left and right shifts for signed and unsigned
 * integers.
 */

#include <stdio.h>

int shift_left_signed(int i, int bits);
int shift_right_signed(int i, int bits);
unsigned int shift_left_unsigned(unsigned int i, int bits);
unsigned int shift_right_unsigned(unsigned int i, int bits);
void print_int_bits(int i);

int main()
{
    int number = 4294967295;
    print_int_bits(number);
    printf("\n%d\n", shift_right_signed(number, 1));
    print_int_bits(shift_right_signed(number, 1));
    printf("\n");
    
    return 0;
}

int shift_left_signed(int i, int bits)
{
    return i << bits;
}

int shift_right_signed(int i, int bits)
{
    // Return the result of shifting i right by bits
    // For example....
    // - shift_right_signed(15, 2) should return 3
    // - shift_right_signed(-40, 3) should return -5
    return i >> bits;
}

unsigned int shift_left_unsigned(unsigned int i, int bits)
{
    // Return the result of shifting i left by bits
    // For example, shift_left_unsigned(15, 2) should return 60
    return i << bits;
}

unsigned int shift_right_unsigned(unsigned int i, int bits)
{
    // Return the result of shifting i right by bits
    // For example, shift_right_unsigned(15, 2) should return 3
    return i >> bits;
}

void print_int_bits(int i)
{
    for (int bit = 31; bit >= 0; --bit)
    {
        printf("%c", (i & 0x80000000) ? '1' : '0');
        i = i << 1;
    }
}
