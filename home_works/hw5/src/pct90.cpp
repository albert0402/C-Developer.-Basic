#include "../include/pct90.h"
#include "vector"

Pct90 :: Pct90 () : m_pct90{0.0} {}

void Pct90 :: update (double next) {
    series.push_back(next);
    m_pct90 = percentile / 100.0 * series.size();
    std::sort(series.begin(), series.end());
}

double Pct90 :: eval() const  {
    return series[(int) m_pct90];
}

const char * Pct90 :: name() const { return "pct90";}