/* summator.h */

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include <memory.h>

#include "core/reference.h"
#include "kompute/Kompute.hpp"

class Summator : public Reference {
    GDCLASS(Summator, Reference);

public:
    Summator();

    void add(float value);
    void reset();
    int get_total() const;

protected:
    static void _bind_methods();

private:
    kp::Manager mManager;
    std::weak_ptr<kp::Sequence> mSequence;
    std::shared_ptr<kp::Tensor> mTensor;
    int mCount;
};

#endif // SUMMATOR_H
