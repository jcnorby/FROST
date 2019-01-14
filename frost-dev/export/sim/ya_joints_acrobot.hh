/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:47 GMT-05:00
 */

#ifndef YA_JOINTS_ACROBOT_HH
#define YA_JOINTS_ACROBOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void ya_joints_acrobot_raw(double *p_output1, const double *var1);

  inline void ya_joints_acrobot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 6, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ya_joints_acrobot_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // YA_JOINTS_ACROBOT_HH
