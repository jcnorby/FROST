/*
 * Automatically Generated from Mathematica.
 * Tue 22 Jan 2019 10:41:02 GMT-05:00
 */

#ifndef COMPUTEFEETVELOCITY_HH
#define COMPUTEFEETVELOCITY_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void computeFeetVelocity_raw(double *p_output1, const double *var1,const double *var2);

  inline void computeFeetVelocity(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    computeFeetVelocity_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // COMPUTEFEETVELOCITY_HH
