New C++17 Features 

g++ -std=c++17 -o code1 main.cpp

deduction

##Session1
##Session2 Standard Template Library
Four Components of STL
- Algorithms
  - Powered by C++ templates
  - Support built-in and user-defined data types using templates
  - Interact with containers via iterators
  - Performance depends on underlying data structure used within a container
  - Certain algorithms work only selective containers
  - Each algorithm supported by the STL expects a certain type of iterator
- Functors
  - Objects behave like regular functions
  - Substituted in place of function pointers
  - Easy to implement
- Iterators
  - Design pattern
  - Objects that allow traversing the containers to:
    - Access
    - Modify and manipulate data stored in containers
  
  Five Types of Iterators
  - Input iterators
    - Used to read from pointed element
    - Supports pre and post-increment operators
    - Does not support decrement operators
    - Supports dereferencing
  - Output iterators
    - Used to modify pointed element
    - Supports pre and post-increment operators
    - Does not support decrement operators
    - Support dereferencing
    - Examples of output iterators:
      - ostream_iterator, back_inserter, and front_inserter iterator
  - Forward iterators
    - Supports input iterator and output iterator functionalities
    - Allows multi-pass navigation
    - Supports pre-increment and pos-increment operators
    - Supports dereferencing
    - The forward_list container supports forward iterators
  - Bidirectional iterators
    - Forward iterator supports navigation in both directions
    - Allows multi-pass navigation
    - Supports pre-increment and post-increment operators
    - Supports pre-decrement and post-decrement operators
    - Supports dereferencing
    - Support list, set, map, multiset, and multimap containers
  - Random-access iterators
- Containers
  - Objects typically grow and shrink dynamically
  - Use complex data structures to store data under the hood
  - Highly efficient and time-tested
  - Uses different types of data structures to:
    - Store, organize, and manipulate data

  Flavors of Containers:
  - Sequential
  - Associative
  - Container adapters

## Session3
- Set
  - Stored only unique values in sorted fashion
  - Organizes values using value as key
  - Values stored in a set can't be modified
  - Uses a red-black tree data structure (balanced blt)

- Map 
  - Stores values organized by keys
  - Dedicated key per value
  - Use red-black tree as an internal data structure
  - Values stored in map are sorted based on key
  - Keys used in map must be unique
  - Red-black tree will be rotated to balance red-black tree height

- MultiSet
  - Store duplicat values
- MultiMap
- Containers Adapters
  - Stack
  - Queue
  - Priority queue
## Some shell commands
$ cd .. && cd aotherdir
$ reset

