/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:58 GMT-05:00
 */

#ifndef ALPHA_LAST_HH
#define ALPHA_LAST_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void alpha_last_raw(double *p_output1, const double *var1);

  inline void alpha_last(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    alpha_last_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // ALPHA_LAST_HH
