int f()
{
    return 20+30;
}

int main()
{
    double d = 1.231;
    decltype(f()) answer1;
    decltype(d) answer2;
    decltype((d)) answer3 = answer2;
}