// Created by Daniel Attali on 3/30/22.

#include "Vector.h"
#include "string"
#include "iostream"

using std::string;
using std::cout;
using std::cin;
using std::endl;

// empty ctor
Vector::Vector() {
    this->dim_n = 0;
    this->vec = nullptr;
}

Vector::Vector(int dim) {
    int * ptr = new int[dim];
//    checking if the dynamic memory allocation has worked properly
    if(ptr == nullptr) {
        throw "Error: dynamic memory allocation was unsuccessful. ";
    }
    this->dim_n = dim;
    this->vec = ptr;
    ptr = nullptr;
}

Vector::Vector(int dim, const int * v, const int size) {
    if(size < dim) {
        throw "Error: wrong dimension vector. ";
    }
    int * ptr = new int[dim];
//    checking if the dynamic memory allocation has worked properly
    if(ptr == nullptr) {
        throw "Error: dynamic memory allocation was unsuccessful. ";
    }
    this->dim_n = dim;
    this->vec = ptr;
    ptr = nullptr;
    for (int i = 0; i < this->dim_n; ++i) {
        this->vec[i] = v[i];
    }
}

// dector
Vector::~Vector() {
    this->dim_n = 0;
    delete [] this->vec;
    this->vec = nullptr;
}

// getter

int Vector::getDimN() const {
    return dim_n;
}

int *Vector::getVec() const {
    return vec;
}

// setter

void Vector::setVec(int * v, int size) {
    if(this->dim_n > size) {
        throw "Error: wrong size array. ";
    }
    for (int i = 0; i < this->dim_n; ++i) {
        this->vec[i] = v[i];
    }
}

// operator overloading

ostream &operator<<(ostream &os, const Vector &v) {
    string str = "< ";
    for (int i = 0; i < v.dim_n - 1; ++i) {
        str += to_string(v.vec[i]) + ", ";
    }
    str += to_string(v.vec[v.dim_n - 1]) +" >";
    cout << str;
    return os;
}

istream &operator>>(istream &is, Vector &v) {
    int num;
    for (int i = 0; i < v.dim_n; ++i) {
        is >> num;
        v.vec[i] = num;
    }
    return is;
}




