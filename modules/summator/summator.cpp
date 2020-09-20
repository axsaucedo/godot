/* summator.cpp */

#include <vector>

#include "summator.h"

Summator::Summator() {
}

void Summator::add(float value) {
}

void Summator::reset() {
}

int Summator::get_total() const {
    return *this->mCount.get();
}

void Summator::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
    ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}

