/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:36 GMT-05:00
 */

#ifndef J_BAR_COND_HH
#define J_BAR_COND_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void J_bar_cond_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void J_bar_cond(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);
    assert_size_matrix(var2, 8, 1);
    assert_size_matrix(var3, 8, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_bar_cond_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_BAR_COND_HH
