#include <KnowledgeFunction.hpp>

const char *to_string(KnowledgeForm f) {
  switch (f) {
  case KnowledgeForm::Axiom:
    return "axiom";
  case KnowledgeForm::Dogma:
    return "dogma";
  case KnowledgeForm::Theorem:
    return "theorem";
  case KnowledgeForm::Theory:
    return "theory";
  case KnowledgeForm::Law:
    return "law";
  case KnowledgeForm::Principle:
    return "principle";
  default:
    return "undefined";
  }
}

const char *to_string(KnowledgeForm *f) {
  if (f == nullptr) {
    return "undefined";
  }

  switch (*f) {
  case KnowledgeForm::Axiom:
    return "axiom";
  case KnowledgeForm::Dogma:
    return "dogma";
  case KnowledgeForm::Theorem:
    return "theorem";
  case KnowledgeForm::Theory:
    return "theory";
  case KnowledgeForm::Law:
    return "law";
  case KnowledgeForm::Principle:
    return "principle";
  default:
    return "undefined";
  }
}
