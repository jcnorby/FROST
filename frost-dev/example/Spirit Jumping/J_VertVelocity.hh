/*
 * Automatically Generated from Mathematica.
 * Wed 5 Aug 2020 10:20:59 GMT-04:00
 */

#ifndef J_VERTVELOCITY_HH
#define J_VERTVELOCITY_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace spirit40continuous
{

  void J_VertVelocity_raw(double *p_output1, const double *var1);

  inline void J_VertVelocity(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_VertVelocity_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_VERTVELOCITY_HH
