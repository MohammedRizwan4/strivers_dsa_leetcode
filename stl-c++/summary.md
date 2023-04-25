Components of STL

STL has four major components:

Containers
Iterators
Algorithms
Function objects

So, start with containers.

Containers

If you are dealing with many elements, then you need to use some sort of container. The container can be described as objects that are used to store the collection of data. It helps in recreating and implementing complex data structures efficiently.

Sequence containers: These are used to implement sequential data structures like a linked list, array, etc.

Associative containers: These are those containers in which each element has a value that is related to a key. They are used to implement sorted data structures, for example, set, multiset, map, etc.

Containers adapters: Container adapters can be defined as an interface used to provide functionality to the pre-existing containers.

Sequence Container:

Vectors: Vectors can be defined as a dynamic array or an array with some additional features.

Deque: Deque is also known as a double-ended queue that allows inserting and deleting from both ends; they are more efficient than vectors in case of insertion and deletion.

List: List is also the sequential container and allows non-contiguous allocation. It allows insertion and deletion anywhere in the sequence.

Associative Container:

Set: It is an associative container that is used to store elements that are unique.

Multiset: This container is similar to that of the set container; the only difference is that it stores non-unique elements. 

Map: Map container contains sets of key-value pairs where each key is associated with one value.

Multimap: These containers also store key-value pairs, but unlike maps, they can have duplicate elements.

Container Adapter:

Stack: Stack follows the last-in, first-out(LIFO) approach that means new elements are added at the end and removed from that end only.

Queue: Queue follows the first-in, first-out(FIFO) approach, which means new elements are added from the end and removed from the front.

Iterators 

Iterators are used to access data in the containers, and it helps in traversing through elements of containers using its functions. They can be incremented and decremented as per choice and help in the manipulation of data in the container.

Iterator functions are:

begin(): This function points the iterator to the first element of the container.

end(): This function points the iterator to the last element of the container.


