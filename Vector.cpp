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

Vector::Vector(int dim, const int * v, const int size) {
    if(size != dim) {
        throw "Wrong dimension vector: ";
    }
    this->dim_n = dim;
    this->vec = new int[this->dim_n];
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


