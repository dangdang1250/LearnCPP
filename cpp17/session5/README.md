## auto_ptr
- auto_prt wrappers raw pointer, Ensures memory pointed by raw_ptr is released
- Can point to an object
- Ownership gets transferred to auto_ptr instance

## unique_ptr
- Allows one smart pointer to own heap-allocated object
- Ownership transfer from on unique_ptr instance to another

## shared_ptr
- Group of shared_ptr shares ownership of heap-allocated objects
- Release shared object if shared_ptr instances are done with shared object
- Reference counting mechanism to check total references to shared object
- Last shared_ptr instance deleted shard object
