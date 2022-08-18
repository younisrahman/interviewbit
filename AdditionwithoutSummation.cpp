int Solution::addNumbers(int A, int B)
{
    int carry = 0, num1 = A, num2 = B;
    while (num2 != 0)
    {
        carry = num1 & num2;
        num1 = num1 ^ num2;
        num2 = carry << 1;
    }
    return num1;
}
