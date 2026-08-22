#ifndef STORAGE_H_
#define STORAGE_H_

#include <memory>

#include "../../archive/matrix/global_decls.h"

namespace matrix {
namespace internal {

template<typename T>
struct Storage
{
private:
  std::unique_ptr<T[]> data;
  size_t size;
  size_t capacity;

public:
  explicit Storage()
    : data{std::make_unique<T>()}, size{}, capacity{} {}
  explicit Storage(size_t s)
    : size{s},
      capacity{static_cast<size_t>(1 << (32 - __builtin_clz(s)))}
  {
    data = std::make_unique<T>(new T[capacity]{});
  }

  explicit Storage(size_t r, size_t c)
    : size{r * c},
      capacity{static_cast<size_t>(1 << (32 - __builtin_clz(r * c)))}
  {
    data = std::make_unique<T>(new T[capacity]{});
  }
  explicit Storage(uninitialized_t u, size_t r, size_t c)
    : size{r * c},
      capacity{static_cast<size_t>(1 << (32 - __builtin_clz(r * c)))}
  {
    data = std::make_unique<T>(new T[capacity]);
  }
};
} // namespace internal
} // namespace matrix

#endif // STORAGE_H_
