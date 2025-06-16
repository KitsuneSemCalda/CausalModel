#pragma once

#include <cstdint>

// NOTE: EpistemicType is a form about the knowledge is getted

enum class EpistemicType : uint8_t {
  Deductive, ///< Logic derived of axioms
  Inductive, ///< Logic derived of empiric generalization
  Abductive, ///< Logic derived of explicative hipothesis
  Undefined, ///< Unknown Type
};

// NOTE: EpistemicClass is a philosophic or methodologic context

enum class EpistemicClass : uint8_t {
  Scientific,    ///< Based on Scientific Method
  Empirical,     ///< Based on experience
  Intuitive,     ///< Based on introspection
  Philosophical, ///< Based on abstract reflection
  Undefined,     ///< Unknown Class
};
