/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:34 GMT-05:00
 */

#ifndef CE2_VEC6_ACROBOT_HH
#define CE2_VEC6_ACROBOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Ce2_vec6_acrobot_raw(double *p_output1, const double *var1,const double *var2);

  inline void Ce2_vec6_acrobot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 6, 1);
    assert_size_matrix(var2, 6, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Ce2_vec6_acrobot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // CE2_VEC6_ACROBOT_HH
