# Multiple Inheritance in Python 

This source code was developed for the presentation “From Diamonds to Mixins: Demystifying Multiple Inheritance in Python” for [EuroPython 2024](https://ep2024.europython.eu/). Check also the [presentation slides](https://docs.google.com/presentation/d/e/2PACX-1vQM1ke12e3d9qruyJWmCBieXJsy5piBQdNkjYk1SlsHe_8y5DWpPZfAIhbmidNlFwaNofql3rZJkTGr/pub?start=false&loop=false&delayms=3000).

## Abstract

Most Python programmers are probably aware that Python supports multiple inheritance. However, few are likely to be aware of its implications and inner workings. This talk aims to shed light on this commonly overlooked topic.

In the first part of the talk we will start by reviewing the “diamond problem,” where a class inherits from two classes that have a common ancestor, and contrast how this issue is handled in Python compared to other object oriented languages. Next, we will discuss the Method Resolution Order (MRO) to see how Python determines the sequence in which classes are considered when searching for a method or attribute. We will also review the use of the `super()` function that allows a subclass to call a method from its superclass in a way that adheres to the MRO.

During the second part of the talk, we will explore real-world scenarios related to the benefits, problems, and alternatives of using multiple inheritance in our programs. We will dedicate some time to examining the concept of a mixin and how to implement it effectively in Python. Finally, we will delve into the Interface Segregation Principle and explore collaboration and composition as mechanisms for avoiding the pitfalls of inheritance in general.

## Presentation Source Code

- `multiple_inheritance.ipynb`: Jupyter Notebook with all the Python code examples.
- `multiple_inheritance.cpp`: C++ source code example.
  
