#pragma once

#include <cstdint>

// NOTE: Type of relationship between two nodes in the causal graph

enum class RelationType : uint8_t {
  Causal,        ///< One node causes another
  Correlational, ///< Nodes vary together but not necessarily causally
  Epistemic,     ///< Logical or knowledge-based linkage
  Logical,       ///< Formal logical dependency
  Undefined      ///< Not specified
};
