# Causal Model Documentation

## Overview

This project defines core data types and utilities to represent and manipulate causal knowledge like languages in logical paradigma ([prolog](https://en.wikipedia.org/wiki/Prolog), [datalog](https://en.wikipedia.org/wiki/Datalog)).

The main focus is on maintaing a structure and extensible represent of knowledge forms.

## Design Principles

- **Explicit Typing**: Enums represent core concepts such as epistemic types, epistemic classes, knowledge forms ...
- **Unified Undefined State**: The `Undefined` enum value represent any absence of information or unreliabe data, used consistently to filter out invalid nodes or edges during inference
- **Robust to Null Pointers**: Pointers variant of **to_string** functions treat null pointers as **Undefined**.
- **Pratical Semantics**: `Undefined` values serves as exclusion flags for inference propagation, effectively pruning the causal graph where information is missing or uncertain.
