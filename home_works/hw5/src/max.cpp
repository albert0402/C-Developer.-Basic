#include "../include/max.h"

Max :: Max()
        : m_max{std::numeric_limits<double>::max()}
        , is_already_used {false} {}

void Max ::update (double next) {

    if (!is_already_used) {
        is_already_used = true;
        m_max = next;
    }
    if (next > m_max) {
        m_max = next;
    }
}

double Max :: eval() const  { return m_max; }

const char * Max :: name() const { return "max";}