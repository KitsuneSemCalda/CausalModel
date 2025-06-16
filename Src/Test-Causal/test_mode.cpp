#include "Episthemology.hpp"
#include "KnowledgeForm.hpp"
#include <CausalModel/EpisthemologicFunction.hpp>
#include <CausalModel/KnowledgeFunction.hpp>
#include <cassert>
#include <iostream>
#include <test_mode.hpp>

void test_knowledge_form_value() {
  std::cout << "[KnowledgeForm::value]\n";
  assert(std::string(to_string(KnowledgeForm::Axiom)) == "axiom");
  assert(std::string(to_string(KnowledgeForm::Dogma)) == "dogma");
  assert(std::string(to_string(KnowledgeForm::Theorem)) == "theorem");
  assert(std::string(to_string(KnowledgeForm::Theory)) == "theory");
  assert(std::string(to_string(KnowledgeForm::Law)) == "law");
  assert(std::string(to_string(KnowledgeForm::Principle)) == "principle");
  assert(std::string(to_string(KnowledgeForm::Undefined)) == "undefined");
}

void test_knowledge_form_pointer() {
  std::cout << "[KnowledgeForm::pointer]\n";
  KnowledgeForm k1 = KnowledgeForm::Theory;
  KnowledgeForm k2 = KnowledgeForm::Dogma;
  KnowledgeForm k3 = KnowledgeForm::Undefined;
  KnowledgeForm *k4 = nullptr;

  assert(std::string(to_string(&k1)) == "theory");
  assert(std::string(to_string(&k2)) == "dogma");
  assert(std::string(to_string(&k3)) == "undefined");
  assert(std::string(to_string(k4)) == "undefined");
}

void test_epistemic_type_value() {
  std::cout << "[EpistemicType::value]\n";
  assert(std::string(to_string(EpistemicType::Deductive)) == "deductive");
  assert(std::string(to_string(EpistemicType::Inductive)) == "inductive");
  assert(std::string(to_string(EpistemicType::Abductive)) == "abductive");
  assert(std::string(to_string(EpistemicType::Undefined)) == "undefined");
}

void test_epistemic_type_pointer() {
  std::cout << "[EpistemicType::pointer]\n";
  EpistemicType e1 = EpistemicType::Deductive;
  EpistemicType e2 = EpistemicType::Abductive;
  EpistemicType *null_ptr = nullptr;

  assert(std::string(to_string(&e1)) == "deductive");
  assert(std::string(to_string(&e2)) == "abductive");
  assert(std::string(to_string(null_ptr)) == "undefined");
}

void test_epistemic_class_value() {
  std::cout << "[EpistemicClass::value]\n";
  assert(std::string(to_string(EpistemicClass::Scientific)) == "scientific");
  assert(std::string(to_string(EpistemicClass::Empirical)) == "empirical");
  assert(std::string(to_string(EpistemicClass::Intuitive)) == "intuitive");
  assert(std::string(to_string(EpistemicClass::Philosophical)) ==
         "philosophical");
  assert(std::string(to_string(EpistemicClass::Undefined)) == "undefined");
}

void test_epistemic_class_pointer() {
  std::cout << "[EpistemicClass::pointer]\n";
  EpistemicClass c1 = EpistemicClass::Scientific;
  EpistemicClass c2 = EpistemicClass::Philosophical;
  EpistemicClass *c3 = nullptr;

  assert(std::string(to_string(&c1)) == "scientific");
  assert(std::string(to_string(&c2)) == "philosophical");
  assert(std::string(to_string(c3)) == "undefined");
}

void test_to_string() {
  test_knowledge_form_pointer();
  test_epistemic_class_pointer();
  test_epistemic_type_pointer();
  test_epistemic_type_value();
  test_knowledge_form_value();
  test_epistemic_class_value();

  std::cout << "\nAll to_string tests passed.\n";
}

void run_test() { test_to_string(); }
