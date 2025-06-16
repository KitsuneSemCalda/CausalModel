#include <RelationFunction.hpp>

const char *to_string(RelationType r) {
  switch (r) {
  case RelationType::Causal:
    return "causal";
  case RelationType::Correlational:
    return "correlational";
  case RelationType::Epistemic:
    return "epistemic";
  case RelationType::Logical:
    return "logical";
  default:
    return "undefined";
  }
}

const char *to_string(RelationType *r) {
  if (r == nullptr) {
    return "undefined";
  }

  switch (*r) {
  case RelationType::Causal:
    return "causal";
  case RelationType::Correlational:
    return "correlational";
  case RelationType::Epistemic:
    return "epistemic";
  case RelationType::Logical:
    return "logical";
  default:
    return "undefined";
  }
}
