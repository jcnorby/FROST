/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:52 GMT-05:00
 */

#ifndef JD2YD_JOINTS_ACROBOT_HH
#define JD2YD_JOINTS_ACROBOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Jd2yd_joints_acrobot_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void Jd2yd_joints_acrobot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);
    assert_size_matrix(var2, 18, 1);
    assert_size_matrix(var3, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Jd2yd_joints_acrobot_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JD2YD_JOINTS_ACROBOT_HH