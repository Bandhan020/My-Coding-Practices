int *plusOne(int *digits, int digitsSize, int *size) {
    digits[digitsSize - 1]++;
    for (int i = digitsSize - 1; i > 0 && digits[i] >= 10; i--) {
        digits[i] -= 10;
        digits[i-1]++;
    }
    int * res = digits;
    *size = digitsSize;
    if (digits[0] >= 10) {
        digits[0] -= 10;
        res = malloc(sizeof(int) * (++*size));
        res[0] = 1;
        memcpy(res + 1, digits, sizeof(int) * digitsSize);
    }
    return res;
}