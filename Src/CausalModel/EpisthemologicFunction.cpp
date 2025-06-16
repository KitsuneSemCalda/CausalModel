#include <EpisthemologicFunction.hpp>
#include <Episthemology.hpp>

const char *to_string(EpistemicClass c) {
  switch (c) {
  case EpistemicClass::Scientific:
    return "scientific";
  case EpistemicClass::Empirical:
    return "empirical";
  case EpistemicClass::Intuitive:
    return "intuitive";
  case EpistemicClass::Philosophical:
    return "philosophical";
  default:
    return "undefined";
  }
}

const char *to_string(EpistemicClass *c) {
  if (c == nullptr) {
    return "undefined";
  }

  switch (*c) {
  case EpistemicClass::Scientific:
    return "scientific";
  case EpistemicClass::Empirical:
    return "empirical";
  case EpistemicClass::Intuitive:
    return "intuitive";
  case EpistemicClass::Philosophical:
    return "philosophical";
  default:
    return "undefined";
  }
}

const char *to_string(EpistemicType t) {
  switch (t) {
  case EpistemicType::Deductive:
    return "deductive";
  case EpistemicType::Inductive:
    return "inductive";
  case EpistemicType::Abductive:
    return "abductive";
  default:
    return "undefined";
  }
}

const char *to_string(EpistemicType *t) {
  if (t == nullptr) {
    return "undefined";
  }

  switch (*t) {
  case EpistemicType::Deductive:
    return "deductive";
  case EpistemicType::Inductive:
    return "inductive";
  case EpistemicType::Abductive:
    return "abductive";
  default:
    return "undefined";
  }
}
