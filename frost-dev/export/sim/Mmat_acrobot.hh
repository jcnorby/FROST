/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:21 GMT-05:00
 */

#ifndef MMAT_ACROBOT_HH
#define MMAT_ACROBOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat_acrobot_raw(double *p_output1, const double *var1);

  inline void Mmat_acrobot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 6, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat_acrobot_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT_ACROBOT_HH
