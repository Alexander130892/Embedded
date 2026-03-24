#include "find_roots.h"

dbl bisection(pfdd f, dbl a, dbl b){
    ++cnt;
    dbl m = (a+b)/2;
    if(f(m) == 0.0 || (b-a) < eps)
        return m;
    else if (f(a) * f(m) < 0.0)
        return bisection(f, a, m);
    else
        return bisection(f, m, b);
}