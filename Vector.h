// Created by Daniel Attali on 3/30/22.

#include "iostream"

using namespace std;

#ifndef MATHLIBRARY_VECTOR_H
#define MATHLIBRARY_VECTOR_H


class Vector {
private:
    int dim_n; // for specifying the dimension of the vector in the vector space R^n

    int * vec; // the array for storing the value of the vector

public:
    Vector(); // empty ctor

    Vector(int dim, const  int * v, int size); // ctor with parameter

    Vector(int dim);

    ~Vector(); // dctor

//    getter

    int getDimN() const;

    int *getVec() const;

//    setter

// there is no setter for dim because we don't want to be able to change the dimension of the vector after creating it

    void setVec(int *vec, int size);

//    operator overloading

    friend ostream& operator<<(ostream& os, const Vector& v);

    friend istream& operator>>(istream& is, Vector& v);

};


#endif //MATHLIBRARY_VECTOR_H
