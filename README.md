# matrix-lib - Introduction
This project is a matrix math library written in C++23. It started as an important part of my AI ('math-ai' repo, currently pinned) but is now being expanded for use with OpenGL and generalized for more AI. Examples of the library in use are in "tests".
# Status
This project is a work in progress.

## Implemented:
  Storage of data in matrix.

## Currently working on:

  I restarted the whole project, so working on internals.
  
## Planned:

  SIMD matrix multiplication

  More misc. matrix operations (like rank)
  
  Integration with Vulkan (once I learn Vulkan)

  Portability into Javascript
  
  OpenGL integration (like functions to make it more convenient to use w/ OpenGL)
#Project Structure
```text
include/matrix/ --- Main library header files
tests/ --- Test files and examples
archive/ --- Old prototype files
```

#Building
## Dependencies
C++23 compiler

CMake (3.20 or newer)

ARM NEON
## Guide
Clone this repo:
```bash
git clone https://github.com/jonah-winter/matrix.git
cd matrix
```
