/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:44 GMT-05:00
 */

#ifndef DJH_FOOT_ACROBOT_HH
#define DJH_FOOT_ACROBOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void dJh_foot_acrobot_raw(double *p_output1, const double *var1,const double *var2);

  inline void dJh_foot_acrobot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 6, 1);
    assert_size_matrix(var2, 6, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dJh_foot_acrobot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DJH_FOOT_ACROBOT_HH
