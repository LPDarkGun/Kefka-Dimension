#include "MyCoreFunctions.h"

const char *getCoreEngineVersion()
{
    static const char *version = "0.0.1-alpha";
    return version;
}

int add_numbers_from_core(int a, int b)
{
    return a + b;
}