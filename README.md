# 🎓 Project Euler — C++ Solutions

> A personal repository documenting my journey as a 2nd-year Computer Science / Software Engineering student mastering **C++**, **data structures**, **algorithmic problem-solving**, and **discrete mathematics** through the [Project Euler](https://projecteuler.net/) challenges.

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue?logo=cplusplus)
![Status](https://img.shields.io/badge/status-active-brightgreen)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

## 📖 About This Repository

Project Euler is a collection of challenging computational problems that sit at the intersection of **mathematics** and **programming**. Solving them requires more than just writing code that "works" — it demands an understanding of number theory, combinatorics, and algorithmic efficiency, since brute-force approaches quickly become computationally infeasible.

This repository is my personal solution set, implemented in **modern C++ (C++17/C++20)**. It reflects my growth as an engineer: each solution is written with an emphasis on **clarity, correctness, and complexity awareness**, rather than just producing the right final answer.

Beyond the numeric result, this repo is meant to demonstrate:
- My ability to translate mathematical statements into working code.
- My growing intuition for algorithmic efficiency and Big-O trade-offs.
- My discipline in writing readable, well-documented, and reusable C++.

---

## 🚀 Key Features

- 🛠️ **Modular Design** — Each problem is a self-contained `.cpp` file in `src/`, paired with shared logic factored out into reusable header utilities.
- 📚 **Reusable Math Toolkit** — Common number-theory and utility functions (primality testing, palindrome checks, figurate number checks, modular exponentiation, big-number string arithmetic) are centralized in `include/MathUtils.hpp`.
- 🧠 **Documented Reasoning** — Every solution file begins with an `OBJECTIVE` comment restating the problem, followed by inline comments explaining *why* an approach works, not just *what* it does.
- 📊 **Complexity-Conscious** — Solutions favor mathematically optimized approaches (e.g., sieve-based primality, modular exponentiation, closed-form checks) over naive brute force wherever the problem demands it.
- 📁 **Data-Driven Problems** — Problems that rely on external datasets (e.g., word lists, number grids) read directly from the `data/` directory.

---

## 🗂️ Repository Structure

```text
Euler_Projects/
├── .clang-tidy        # Static analysis configuration (LLVM / Clang)
├── CMakeLists.txt     # Build automation configuration
├── README.md          # Project documentation and guide
├── include/
│   └── MathUtils.hpp  # Reusable mathematical & algorithmic utilities
├── src/
│   ├── Euler001.cpp   # Individual problem solutions (Euler001 - Euler932)
│   ├── Euler002.cpp
│   └── ...
└── data/
    ├── 022_names.txt  # Problem-specific input data files
    └── 042_words.txt

---


Each solution file follows a consistent internal convention:

```cpp
// OBJECTIVE
// A short restatement of the Project Euler problem being solved.

#include <iostream>
// ...additional includes / utility headers as needed

int main()
{
    // Implementation with inline reasoning comments
}
```

---

## 🛠️ Setup & Compilation

### Prerequisites

- A C++ compiler supporting **C++17** or later (GCC ≥ 9, Clang ≥ 10, or MSVC equivalent).
- Git (to clone the repository).

### Option 1 — Direct Compilation (GCC / Clang)

Each solution is self-contained and can be compiled independently. Since some solutions read files from `data/` using relative paths, compile and run from within the `src/` directory:

```bash
# Clone the repository
git clone https://github.com/<your-username>/Euler_Projects.git
cd Euler_Projects/src

# Compile a single solution (include the shared headers with -I)
g++ -std=c++17 -O2 -I../include Euler022.cpp -o Euler022

# Run it
./Euler022
```

> 💡 The `-O2` flag is recommended for problems involving heavier computation (e.g., large sieves or big-number arithmetic).

### Option 2 — CMake (Recommended for Batch Builds)

For building multiple solutions at once, a lightweight `CMakeLists.txt` can be used:

```cmake
cmake_minimum_required(VERSION 3.15)
project(EulerProjects CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

file(GLOB SOLUTIONS "src/*.cpp")
foreach(solution_file ${SOLUTIONS})
    get_filename_component(solution_name ${solution_file} NAME_WE)
    add_executable(${solution_name} ${solution_file})
endforeach()
```

Then build with:

```bash
mkdir build && cd build
cmake ..
cmake --build .

# Run a specific solution's executable
./Euler001
```

---

## 📊 Approach to Problem-Solving

For each problem, my general workflow is:

1. **Understand the math** — Restate the problem and identify the underlying mathematical structure (number theory, combinatorics, sequences, etc.).
2. **Sketch a brute-force solution** — Establish correctness on small inputs first.
3. **Analyze complexity** — Identify the bottleneck and evaluate whether the brute-force approach scales to the problem's actual constraints.
4. **Optimize** — Apply a more efficient algorithm or mathematical identity (e.g., replacing trial division with a sieve, or an O(n²) check with a closed-form formula) where needed.
5. **Document** — Leave inline comments explaining *why* the optimization is valid, not just what the code does.

---

## 🎓 Learning Objectives

This repository serves as a practical log of concepts I am actively studying and reinforcing as a 2nd-year CS/SE student:

| Area | Concepts Practiced |
|---|---|
| **Number Theory** | Primality testing, GCD/LCM, modular arithmetic, figurate numbers (triangle, pentagon, hexagon), divisor sums |
| **Algorithms** | Sieve of Eratosthenes, recursion, greedy strategies, brute-force pruning |
| **Dynamic Programming** | Memoization for recurrence-based problems (e.g., collatz chains, path counting, partition problems) |
| **Data Structures** | Arrays, strings, sets, and maps used for frequency counting, digit manipulation, and permutation generation |
| **Complexity Analysis** | Evaluating and improving time/space complexity (Big-O) between naive and optimized solutions |
| **Big Integer Handling** | String-based arithmetic for numbers exceeding native integer limits |
| **C++ Fundamentals** | Modern C++ syntax, header/implementation separation, standard library usage (`<algorithm>`, `<fstream>`, `<sstream>`) |

---

## 📈 Progress

Solutions are added incrementally as I work through problems on [projecteuler.net](https://projecteuler.net/). Problem numbers are not necessarily solved in strict order — I occasionally revisit earlier, simpler problems to refactor them once I learn a more efficient technique.

---

## 📬 Contact

Feel free to explore the code, open an issue, or reach out if you'd like to discuss an approach or suggest an optimization.

**Author:** *Çınar Gençoğuz*
**Program:** B.Sc. Computer Science / Software Engineering — 2nd Year
**GitHub:** [@CinarGencoguz](https://github.com/CinarGencoguz)

---

## 📄 License

This project is licensed under the [MIT License](LICENSE) — feel free to use the code for learning purposes, with attribution appreciated.
