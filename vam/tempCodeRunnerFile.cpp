long long multiply_modulo(long long a, long long b, long long M)
{
    if (b == 0)
        return 0;

    long long t = multiply_modulo(a, b / 2, M) % M;

    if (b & 1)
        return ((t + t) % M + a % M) % M;
    else
        return (t + t) % M;
}