#include <iostream>
#include <vector>
#include "math_utils.hpp"

int main() {
    std::cout << "=========================================\n";
    std::cout << "   C++ Quickstart - Math & Vectors CLI   \n";
    std::cout << "=========================================\n\n";

    math::Vector3 v1(1.0, 2.0, 3.0);
    math::Vector3 v2(4.0, 5.0, 6.0);

    std::cout << "Vector A:       " << v1.to_string() << "\n";
    std::cout << "Vector B:       " << v2.to_string() << "\n";
    std::cout << "Magnitude of A: " << v1.magnitude() << "\n";
    std::cout << "A + B:          " << (v1 + v2).to_string() << "\n";
    std::cout << "Dot product:    " << v1.dot(v2) << "\n";
    std::cout << "Cross product:  " << v1.cross(v2).to_string() << "\n\n";

    std::vector<double> sample_data = { 12.5, 45.2, 98.1, 23.4, 67.8, 54.0 };
    std::cout << "Sample dataset size: " << sample_data.size() << "\n";

    auto stats = math::calculate_stats(sample_data);
    if (stats) {
        std::cout << "  • Mean:     " << stats->mean << "\n";
        std::cout << "  • Min:      " << stats->min << "\n";
        std::cout << "  • Max:      " << stats->max << "\n";
        std::cout << "  • Variance: " << stats->variance << "\n";
    }

    std::cout << "\nC++ operations executed successfully!\n";
    return 0;
}
