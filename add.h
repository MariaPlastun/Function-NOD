#pragma once
#ifndef app_h
#define app_h 

int f(int k, int s);
int f(long k, long s);
int f(float k, float s);
int f(double k, double s);
template <class Type>
int nod(Type a,Type b)
{
s = (int)a;
k = (int)b;
while (k != s)
{
   (k > s)? (k -= s):(s -= k);
}
return k;
}

#endif
