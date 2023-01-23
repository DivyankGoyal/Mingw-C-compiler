bool isprime(long long num)
{
    if (num == 1)
        return false;
    for (long long i = 2; i*i <= num;)
    {
        if (num % i == 0)
        {
            return false;
        }
        if(i==2)
        i++;
        else
        i+=2;
    }
    return true;
}