#include "math_utils.hpp"
#include <cmath>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <algorithm>

namespace math {

Vector3::Vector3(double x, double y, double z) : x(x), y(y), z(z) {}

double Vector3::magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

Vector3 Vector3::normalized() const {
    double mag = magnitude();
    if (mag == 0.0) return Vector3(0, 0, 0);
    return Vector3(x / mag, y / mag, z / mag);
}

double Vector3::dot(const Vector3& other) const {
    return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(const Vector3& other) const {
    return Vector3(
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    );
}

Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(double scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

std::string Vector3::to_string() const {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    oss << "(" << x << ", " << y << ", " << z << ")";
    return oss.str();
}

std::optional<Statistics> calculate_stats(const std::vector<double>& values) {
    if (values.empty()) return std::nullopt;

    double sum = std::accumulate(values.begin(), values.end(), 0.0);
    double mean = sum / values.size();

    auto [min_it, max_it] = std::minmax_element(values.begin(), values.end());

    double sq_diff_sum = 0.0;
    for (double v : values) {
        sq_diff_sum += (v - mean) * (v - mean);
    }
    double variance = sq_diff_sum / values.size();

    return Statistics{ mean, *min_it, *max_it, variance };
}

} // namespace math
