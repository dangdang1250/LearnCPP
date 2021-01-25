# Container

## Three types of containers are available:
- Sequence containers:
    - Elements are accessed by index
- Associative containers:
    - Elements are accessed by key
- Adapter container:
    - Not fully implemented containers, but simply a new API on top of an existing containter

## Sequence Containers
- Sequence containers are ordered in a strict linear sequence, and are accessed via their position index within that sequence
- Some sequences are guaranteed to be allocated in contiguous memory blocks:
    - array
    - vector
- Some are not:
    - deque : The deque is a double-ended queue
    - forward_list
    - list

## Associative Containers
- Elements stored in associative containers are accessed via their keys, and not by their position in the sequence
- Their order can be more loosely defined and usually optimized for searching algorithms rather than humans:
    - maps  
    - sets
    - unordered_maps
    - unordered_sets

## Adapter Containers
- Adapter containers are wrappers around existing containers that provide a new API:
    - stack
    - queue
    - priority queue

## Assessing Elements in a Container
| Container std:: | operator[] | at | front | back | data | top |
| --------------- | ---------- | -- | ----- | ---- | ---- | --- |
| array           |     X      | X  |   X   |  X   |  X   |     |
| deque           |     X      | X  |   X   |  X   |      |     |
| forward_list    |            |    |   X   |      |      |     |
| list            |            |    |   X   |  X   |      |     |
| map             |     X      | X  |       |      |      |     |
| queue           |            |    |   X   |  X   |      |     |
| stack           |            |    |       |      |      |  X  |
| set             |            |    |       |      |      |     |
| unordered_map   |     X      | X  |       |      |      |     |
| unordered_set   |            |    |       |      |      |     |
| vector          |     X      | X  |   X   |  X   |  X   |     |


## Types of Maps
| Map Type           | Associative | Ordered | Mapped | Unique Keys | Hashing | Dynamic |
| ------------------ | ----------- | ------- | ------ | ----------- | ------- | ------- |
| map                |    X        |    X    |    X   |     X       |         |    X    |
| multimap           |    X        |    X    |    X   |             |         |    X    |
| unordered_map      |    X        |         |    X   |     X       |    X    |    X    |
| unordered_multimap |    X        |         |    X   |             |    X    |    X    |
