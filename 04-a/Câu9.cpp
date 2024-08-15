string decimal_to_binary(long number)
{
    // Your code here
    if (number == 0) return "0";

    string binary;

    while (number > 0) {
        binary += (number % 2) ? '1' : '0';
        number /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}
