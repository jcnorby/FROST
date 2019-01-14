/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:39 GMT-05:00
 */

#ifndef ALPHA_COND_HH
#define ALPHA_COND_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void alpha_cond_raw(double *p_output1, const double *var1);

  inline void alpha_cond(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 6);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    alpha_cond_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // ALPHA_COND_HH
