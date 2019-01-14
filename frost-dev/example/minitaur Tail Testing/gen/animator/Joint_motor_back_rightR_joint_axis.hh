/*
 * Automatically Generated from Mathematica.
 * Tue 31 Jul 2018 14:08:26 GMT-04:00
 */

#ifndef JOINT_MOTOR_BACK_RIGHTR_JOINT_AXIS_HH
#define JOINT_MOTOR_BACK_RIGHTR_JOINT_AXIS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Joint_motor_back_rightR_joint_axis_raw(double *p_output1, const double *var1);

  inline void Joint_motor_back_rightR_joint_axis(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 25, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Joint_motor_back_rightR_joint_axis_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JOINT_MOTOR_BACK_RIGHTR_JOINT_AXIS_HH
