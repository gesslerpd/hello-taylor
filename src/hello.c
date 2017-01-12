#include <stdio.h>

char helloChar(int x)
{
    double coe[] = {
        32.000000175985342,
        59.992712924828531,
        66.470158210776134,
        -25.266350432752930,
        -19.163210748755390,
        2.8209780549126937,
        2.3088020498089943,
        -0.041164027314763929,
        -0.11783233938896079,
        -0.0063753854705878516,
        0.0020825065787467237,
        0.00019886363031707075};

    double sum = 0;
    for (int i = 0; i < sizeof(coe) / sizeof(coe[0]); i++)
    {
        int acc = 1;
        for (int j = 0; j < i; j++)
        {
            acc *= (x - 6);
        }
        sum += coe[i] * acc;
    }
    double sumI = (int)sum;
    return sum < (sumI + 0.5) ? sumI : sumI + 1;
}

void hello(void)
{
    for (int i = 0; i < 12; i++)
    {
        putchar(helloChar(i));
    }
    putchar(10);
}

int main(int argc, char *argv[])
{
    hello();
    return 0;
}
