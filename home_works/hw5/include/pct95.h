#pragma once

#include <vector>
#include "istatistics.h"

class Pct95 : public IStatistics {
public:
    Pct95 ();

    void update(double next) override;

    double eval() const override;

    const char * name() const override;

private:
    double m_pct95;
    int const percentile = 95;
    std::vector<double> series;
};
