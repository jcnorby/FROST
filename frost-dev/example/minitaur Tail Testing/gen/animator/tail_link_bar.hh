/*
 * Automatically Generated from Mathematica.
 * Mon 6 Aug 2018 16:06:39 GMT-04:00
 */

#ifndef TAIL_LINK_BAR_HH
#define TAIL_LINK_BAR_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void tail_link_bar_raw(double *p_output1, const double *var1);

  inline void tail_link_bar(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 20, 6);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tail_link_bar_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TAIL_LINK_BAR_HH
