/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:53 GMT-05:00
 */

#ifndef DDYD2_SQUARE_INTEGRAL_HH
#define DDYD2_SQUARE_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void ddyd2_square_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void ddyd2_square_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);
    assert_size_matrix(var2, 8, 1);
    assert_size_matrix(var3, 2, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ddyd2_square_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DDYD2_SQUARE_INTEGRAL_HH
