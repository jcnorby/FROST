/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:03:02 GMT-05:00
 */

#ifndef Y_SQUARE_HH
#define Y_SQUARE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void y_square_raw(double *p_output1, const double *var1);

  inline void y_square(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    y_square_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // Y_SQUARE_HH
