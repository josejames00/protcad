#include "/usr/include/stdio.h" 
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "tnt.h"
#include "vec.h"
#include "cmat.h"
#endif

#ifndef TYPEDEF_H
#define TYPEDEF_H

typedef unsigned int UInt;
typedef vector<double> DouVec;
typedef vector<double> DblVec;
typedef vector<UInt> UIntVec;
typedef vector<string> StrVec;

//typedef doubleVector dblVec;
//typedef doubleMatrix dblMat;

typedef TNT::Vector<double> dblVec;
typedef TNT::Matrix<double> dblMat;

#ifndef CMATH_H
#include "CMath.h"
#endif

#endif
