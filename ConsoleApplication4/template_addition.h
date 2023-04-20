#pragma once
#ifndef TEMPLATE_ADDITION_H
#define TEMPLATE_ADDITION_H

#include <type_traits>
#include "addition.h"

namespace CustomNamespace {
    template <typename T>
    T templateAddition(T a, T b) {
        static_assert(std::is_same<decltype(add(a, b)), T>::value, "Type mismatch");
        return add(a, b);
    }
}

#endif // TEMPLATE_ADDITION_H
