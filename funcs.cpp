#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int num, int den)
{
    if(num % den == 0 )
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

bool isPrime(int num)
{
    bool prime = true;
    if(num == 0 || num == 1)
    {
        prime = false;
    }
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            prime = false;
        } 
    }
    return prime;
}

int nextPrime(int n)
{
    int num = n + 1;
    while(isPrime(num) == false)
    {
        num++;
    }
    return num;
}

int countPrimes(int a, int b)
{   
    int first = a;
    int result = 0; 
    while(first <= b)
    {
        if(isPrime(first))
        {
            result++;
        }
        first++;
    }
    return result;
}

bool isTwinPrime(int num)
{
    if(isPrime(num))
    {
        if(isPrime(num+2) || isPrime(num-2))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int nextTwinPrime(int n)
{
    int num = n + 1;
    while(isTwinPrime(num) == false)
    {
        num++;
    }
    return num;
}

int largestTwinPrime(int a, int b)
{
    int prime = -1;
    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            if(isTwinPrime(i))
            {
                if(i > prime)
                {
                    prime = i;
                }
            }
        }
    }
    return prime;
}

