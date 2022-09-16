#ifndef SOLVE_SQUARE_H_INCLUDED
#define SOLVE_SQUARE_H_INCLUDED

enum Num_Roots
{
    NO_SOL  =  0,
    ONE_SOL =  1,
    TWO_SOL =  2,
    INF_SOL = -1
};

//---------------------------------------------------------
//! Solve a square equation ax2 + bx + c = 0
//!
//! @param [in] a a-coefficient
//! @param [in] b b-coefficient
//! @param [in] c c-coefficient
//!
//! @param [out] x1 Pointer to the 1st root
//! @param [out] x2 Pointer to the 2nd root
//!
//! @return Quantity of solution
//!
//! @note Return (-1) if infinity quantity of solutions
//---------------------------------------------------------

Num_Roots solve_square(double a, double b, double c, double *x1, double *x2);

Num_Roots solve_linear(double b, double c, double *x1);


//--------------------------------------------------
//! Compares double with 0
//!
//! @param [in] value Double argument
//!
//! @return True if (value == 0) and False if not
//!
//! @note If (value is very close to 0) True
//--------------------------------------------------

int is_zero(double value);

<<<<<<< HEAD
double removal_minus_zero(double x);
=======
void removal_minus_zero(double *x1, double *x2);
>>>>>>> fdbb6b433e1965fcbe43d639c8b50a67063b51ac

#endif // SOLVE_SQUARE_H_INCLUDED
