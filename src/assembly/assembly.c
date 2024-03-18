
//glpat-SNixgZ5e6NWeo1Wwga11 flag = UCTF{6240a7392fd7dbb53a6c67f10ac479c9}

int g(int x)
{
    return x + 3;
}

int f(int x)
{
    return g(x);
}

int main(void)
{
    return f(8) + 1;
}
