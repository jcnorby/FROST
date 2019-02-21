/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:18 GMT-06:00
 */

#ifndef RIGHTFOOT_PATCH_HH
#define RIGHTFOOT_PATCH_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void RightFoot_patch_raw(double *p_output1, const double *var1);

  inline void RightFoot_patch(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 21, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    RightFoot_patch_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // RIGHTFOOT_PATCH_HH