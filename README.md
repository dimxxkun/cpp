# C++

A clean modern C++ starter repository demonstrating C++17 conventions, header/implementation separation, CMake configuration, Makefile support, and a vector/statistics CLI utility.

## Project Structure

```
cpp/
├── CMakeLists.txt
├── Makefile
├── README.md
├── .gitignore
├── include/
│   └── math_utils.hpp
└── src/
    ├── math_utils.cpp
    └── main.cpp
```

## Prerequisites

- A C++17 compliant compiler (`g++`, `clang++`, or MSVC `cl.exe`)
- (Optional) CMake 3.15+

## How to Build & Run

### Using CMake:

```bash
mkdir build
cd build
cmake ..
cmake --build .
./cpp_app
```

### Using Makefile (Linux / macOS / MinGW):

```bash
make
make run
```

### Using direct g++ command:

```bash
g++ -std=c++17 -Iinclude src/main.cpp src/math_utils.cpp -o bin/cpp_app
./bin/cpp_app
```

## License

[Noncommercial license](LICENSE)

## Commercial permission

Original material in this repository is available under the [Noncommercial Use and Commercial Permission License](LICENSE). **Noncommercial use is free. Commercial use requires prior written permission and a separate written agreement specifying the scope and agreed fee.** Contact [work.abdulfatai@gmail.com](mailto:work.abdulfatai@gmail.com) with the repository name and intended use.

Portfolio review and recruitment evaluation are permitted without a fee. Third-party components retain their own licenses. Permissions already granted for earlier versions remain valid; the new terms do not revoke those grants. These are custom source-available terms, not an OSI-approved open-source license.
