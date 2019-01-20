#ifndef POINT_H_
#define POINT_H_

#include <ostream>
#include "serializer.h"

struct Point {
    uint32_t row;
    uint32_t column;

    static Point min (const Point &left, const Point &right);

    static Point max (const Point &left, const Point &right);

    static Point max ();

    Point ();

    Point (uint32_t row, uint32_t column);

    explicit Point (Deserializer &input);

    int compare (const Point &other) const;

    bool is_zero () const;

    Point traverse (const Point &other) const;

    Point traversal (const Point &other) const;

    void serialize (Serializer &output) const;

    bool operator != (const Point &other) const;

    bool operator == (const Point &other) const;

    bool operator < (const Point &other) const;

    bool operator <= (const Point &other) const;

    bool operator > (const Point &other) const;

    bool operator >= (const Point &other) const;
};

inline std::ostream &operator << (std::ostream &stream, const Point &point) {
    return stream << "(" << point.row << ", " << point.column << ")";
}

#endif // POINT_H_
