#ifndef OSTREAM_EXTENSIONS_H_
#define OSTREAM_EXTENSIONS_H_

#include <concepts>
#include <ostream>

template <typename T>
concept Iterable = requires(T iterable) {
  begin(iterable);
  end(iterable);
};

template <typename T, typename U>
inline T &operator<<(T &ostream, const U &iterable)
  requires(std::same_as<T, std::ostream> ||
           std::derived_from<T, std::ostream>) &&
          Iterable<U>
{
  for (const auto &element : iterable) {
    ostream << element << " ";
  }
  return ostream;
}

#endif  // OSTREAM_EXTENSIONS_H_