#pragma once

#include <cstdint>

// Formal  declaration status of the knowledge.
enum class KnowledgeForm : uint8_t {
  Axiom,     ///< Accepted as a foundational truth
  Dogma,     ///< Accepted by authority or tradition
  Theorem,   ///< Logically proven proposition
  Theory,    ///< Explanatory and predictive framework
  Law,       ///< Empirical regularity with high predictive power
  Principle, ///< General guiding rule or assumption
  Undefined  ///< Not specified
};
