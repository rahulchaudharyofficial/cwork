#ifndef _GEN_H_
#define _GEN_H_
    void demo(void);
    static inline double min_d(double a, double b) 
    {
        return a<b?a:b;
    }

    static inline long double min_ld(long double a, long double b) 
    {
        return a<b?a:b;
    }

    static inline float min_f(float a, float b)
    {
        return a<b?a:b;
    }

    #define MIN(A,B)                                 \
        _Generic ((A) + (B),                         \
                float: min_f,                        \
                long double: min_ld,                 \
                default: min_d)                      \
                ((A),(B))
#endif