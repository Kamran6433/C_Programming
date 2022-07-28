// Digital root is the recursive sum of all the digits in a number.

// Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.

int digital_root(int n) 
{
    int x, sum = 0;
    while (n > 0) 
    {
        x = n % 10;
        sum = sum + x;
        n = n / 10; 
        if(n == 0 && sum > 9) {
            n = sum;
            sum = 0;
            digital_root(n);
        }
    }
    return sum;
}