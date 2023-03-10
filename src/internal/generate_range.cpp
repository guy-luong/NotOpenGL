#include <random>
#include <stdexcept>

float generate_range(float min, float max) {
  static std::random_device rd;
  static std::mt19937 mt32(rd());
  if (min > max) {
    throw std::invalid_argument("max should be bigger than min");
  }
  std::uniform_real_distribution<> reals(min, max);
  return float(reals(mt32));
}
