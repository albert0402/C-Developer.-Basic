#pragma once

template <typename T>
class Generic_container{
public:
    Generic_container(){};
    virtual ~Generic_container(){};

private:
    unsigned int current_size; //number of elements currently present in the vector
    unsigned int capacity;     //total storage capacity of the vector - maximum size of the vector
    T* buffer;                 //pointer to a data type
};