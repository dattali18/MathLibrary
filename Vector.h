// Created by Daniel Attali on 3/30/22.

#ifndef MATHLIBRARY_VECTOR_H
#define MATHLIBRARY_VECTOR_H


class Vector {
private:
    int dim_n; // for specifying the dimension of the vector in the vector space R^n

    int * vec; // the array for storing the value of the vector

public:
    Vector(); // empty ctor

    Vector(int dim, const  int * v, int size); // ctor with parameter

    ~Vector(); // dctor
};


#endif //MATHLIBRARY_VECTOR_H
