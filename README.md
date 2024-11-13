# Erb Template Instantiation for Visual Studio

This project demonstrates source code generation via Ruby `erb`, integrated into a Visual Studio project.

The input file `code/settings.hpp.erb` is used by `erb` to generate `code/settings.hpp` before the `ClCompile` build step.
The generated file is included by `code/main.cpp`.

Ruby must be installed with `erb` located in the user's `PATH`.
