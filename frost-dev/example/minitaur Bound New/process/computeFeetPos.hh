/*
 * Automatically Generated from Mathematica.
 * Thu 23 May 2019 14:35:25 GMT-04:00
 */

#ifndef COMPUTEFEETPOS_HH
#define COMPUTEFEETPOS_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void computeFeetPos_raw(double *p_output1, const double *var1);

  inline void computeFeetPos(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 3);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    computeFeetPos_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // COMPUTEFEETPOS_HH