#ifndef MATH_UTILS_HPP
#define MATH_UTILS_HPP

#include <vector>
#include <string>
#include <optional>

namespace math {

class Vector3 {
public:
    double x, y, z;

    Vector3(double x = 0.0, double y = 0.0, double z = 0.0);

    double magnitude() const;
    Vector3 normalized() const;
    double dot(const Vector3& other) const;
    Vector3 cross(const Vector3& other) const;

    Vector3 operator+(const Vector3& other) const;
    Vector3 operator-(const Vector3& other) const;
    Vector3 operator*(double scalar) const;

    std::string to_string() const;
};

// Computes running statistics for a numeric sequence
struct Statistics {
    double mean;
    double min;
    double max;
    double variance;
};

std::optional<Statistics> calculate_stats(const std::vector<double>& values);

} // namespace math

#endif // MATH_UTILS_HPP
