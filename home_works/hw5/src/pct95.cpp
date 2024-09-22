#include "../include/pct95.h"
#include "vector"

Pct95 :: Pct95 () : m_pct95{0.0} {}

void Pct95 :: update (double next) {
    series.push_back(next);
    m_pct95 = percentile / 100.0 * series.size();
    std::sort(series.begin(), series.end());
}

double Pct95 :: eval() const  {
    return series[(int) m_pct95];
}

const char * Pct95 :: name() const { return "pct95";}