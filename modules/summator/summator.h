/* summator.h */

#ifndef SUMMATOR_H
#define SUMMATOR_H

#include <memory>

#include "kompute/Kompute.hpp"

#include "core/reference.h"

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
    std::shared_ptr<int> mCount;
    kp::Manager mgr;
};

#endif // SUMMATOR_H
