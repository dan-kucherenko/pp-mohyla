long polynomialSum(int* ptr_x, int* ptr_n) {
    long sum = 0;
    const int n = *ptr_n, x = *ptr_x, x_sq = x * x;
    int x1 = x_sq;
    for (int i = 0; i < n; i++) {
        sum += x1;
        x1 *= x_sq;
    }
    return sum;
}