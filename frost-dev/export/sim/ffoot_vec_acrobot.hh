/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:59 GMT-05:00
 */

#ifndef FFOOT_VEC_ACROBOT_HH
#define FFOOT_VEC_ACROBOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void ffoot_vec_acrobot_raw(double *p_output1, const double *var1,const double *var2);

  inline void ffoot_vec_acrobot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 6, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ffoot_vec_acrobot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FFOOT_VEC_ACROBOT_HH
