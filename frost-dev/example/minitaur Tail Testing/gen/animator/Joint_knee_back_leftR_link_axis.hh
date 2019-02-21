/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:09 GMT-04:00
 */

#ifndef JOINT_KNEE_BACK_LEFTR_LINK_AXIS_HH
#define JOINT_KNEE_BACK_LEFTR_LINK_AXIS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Joint_knee_back_leftR_link_axis_raw(double *p_output1, const double *var1);

  inline void Joint_knee_back_leftR_link_axis(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 25, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Joint_knee_back_leftR_link_axis_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JOINT_KNEE_BACK_LEFTR_LINK_AXIS_HH
