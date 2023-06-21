mdfa-key-value (Work-In-Progress Repo)
================

![github-actions](https://github.com/dstrebkov/mdfa-key-value/actions/workflows/cmake.yml/badge.svg?event=push)
[![codecov](https://codecov.io/gh/dstrebkov/mdfa-key-value/branch/main/graph/badge.svg?token=ZH1RSUGL5R)](https://codecov.io/gh/dstrebkov/mdfa-key-value)
![language](https://img.shields.io/github/languages/top/dstrebkov/mdfa-key-value)
![repo size](https://img.shields.io/github/repo-size/dstrebkov/mdfa-key-value)



Implementation of a dictionary based on minimal deterministic finite-state automata (minimal DFA) in which a key is associated with a set of values.

Minimization of the DFA is to be done using approach described in [Almeida et al. (2010)](https://www.semanticscholar.org/paper/Incremental-DFA-minimisation-Almeida-Moreira/db9f9388d924bd789b2c52a331f6890228b35601)

CMake ≥ `3.18` is required.
