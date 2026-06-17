# Object in C++
## Quick Revision Notes (GeeksforGeeks Style)

### Definition
An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created), memory is allocated. An object has state (data variables) and behavior (member functions).

### Key Points
- Objects are the basic run-time entities in an object-oriented system.
- You can create multiple objects of the same class.
- Members of a class are accessed using the dot (`.`) operator on the object.

### Example Syntax
```cpp
class MyClass { public: int id; };
int main() {
    MyClass obj; // obj is an object
    obj.id = 10;
    return 0;
}
```
