//
// Created by Khyati on 6/27/24.
//

#ifndef GENERICRUBIKSCUBE_H
#define GENERICRUBIKSCUBE_H

#include "bits/stdc++.h"
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

    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const=0;

    static char getColorLetter(COLOR color);

    virtual bool isSolved() const=0;

    static string getMove(MOVE ind);

    void print() const;

    vector<MOVE> randomShuffleCube(unsigned int times);

    GenericRubiksCube &move(MOVE ind);

    GenericRubiksCube &invert(MOVE ind);

    virtual GenericRubiksCube &f=0;

    virtual GenericRubiksCube &f2=0;

    virtual GenericRubiksCube &fprime=0;

    virtual GenericRubiksCube &b=0;

    virtual GenericRubiksCube &b2=0;

    virtual GenericRubiksCube &bprime=0;

    virtual GenericRubiksCube &u=0;

    virtual GenericRubiksCube &u2=0;

    virtual GenericRubiksCube &uprime=0;

    virtual GenericRubiksCube &d=0;

    virtual GenericRubiksCube &d2=0;

    virtual GenericRubiksCube &dprime=0;

    virtual GenericRubiksCube &r=0;

    virtual GenericRubiksCube &r2=0;

    virtual GenericRubiksCube &rprime=0;

    virtual GenericRubiksCube &l=0;

    virtual GenericRubiksCube &l2=0;

    virtual GenericRubiksCube &lprime=0;

    string getCornerColorString(unint_8 ind) const;

    unint_8 getColorIndex(unit_8 ind) const;

    unint_8 getColorOrientation(unit_8 ind) const;
};

#endif //GENERICRUBIKSCUBE_H
