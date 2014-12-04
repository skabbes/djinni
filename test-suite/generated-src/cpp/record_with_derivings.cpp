// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#include "record_with_derivings.hpp"  // my header

namespace djinni { namespace cpp {


bool RecordWithDerivings::operator==(const RecordWithDerivings & other) const {
    return key1 == other.key1 &&
        key2 == other.key2;
}

bool RecordWithDerivings::operator!=(const RecordWithDerivings & other) const {
    return !(*this == other);
}

bool RecordWithDerivings::operator<(const RecordWithDerivings & other) const {
    if (key1 < other.key1) {
        return true;
    }
    if (other.key1 < key1) {
        return false;
    }
    if (key2 < other.key2) {
        return true;
    }
    if (other.key2 < key2) {
        return false;
    }
    return false;
}

bool RecordWithDerivings::operator>(const RecordWithDerivings & other) const {
    return other < *this;
}

bool RecordWithDerivings::operator<=(const RecordWithDerivings & other) const {
    return (*this < other || *this == other);
}

bool RecordWithDerivings::operator>=(const RecordWithDerivings & other) const {
    return other <= *this;
}

} }  // namespace djinni::cpp
