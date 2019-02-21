/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:38:42 GMT-06:00
 */

#ifndef JOINT_BACK_BKX_AXIS_HH
#define JOINT_BACK_BKX_AXIS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Joint_back_bkx_axis_raw(double *p_output1, const double *var1);

  inline void Joint_back_bkx_axis(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 21, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Joint_back_bkx_axis_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JOINT_BACK_BKX_AXIS_HH