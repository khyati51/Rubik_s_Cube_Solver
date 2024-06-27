//
// Created by Khyati on 6/27/24.
//

#ifndef GENERICRUBIKSCUBE_H
#define GENERICRUBIKSCUBE_H
#include<bits/stdc++.h>
using namespace std;


class GenericRubiksCube {
public:
    enum class FACE{
        UP,
        DOWN,
        LEFT,
        RIGHT,
        FRONT,
        BACK
    };

    enum class COLOR{
        RED,
        BLUE,
        GREEN,
        YELLOW,
        WHITE,
        ORANGE
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        F, FPRIME, F2,
        B, BPRIME, B2,
        U, URPIME, U2,
        D, DPRIME, D2

    };
};



#endif //GENERICRUBIKSCUBE_H
