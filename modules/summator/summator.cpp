/* summator.cpp */

#include <vector>

#include "summator.h"

Summator::Summator() {
    this->mTensor = this->mManager.buildTensor({ 0.0 });
    this->mSequence = this->mManager.getOrCreateManagedSequence("AdditionSeq");
}

void Summator::add(float value) {
    this->mCount += value;
}

void Summator::reset() {
}

int Summator::get_total() const {
    return this->mCount;
}

void Summator::_bind_methods() {
    ClassDB::bind_method(D_METHOD("add", "value"), &Summator::add);
    ClassDB::bind_method(D_METHOD("reset"), &Summator::reset);
    ClassDB::bind_method(D_METHOD("get_total"), &Summator::get_total);
}

