/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:32 GMT-05:00
 */

#ifndef J_YMAX_HH
#define J_YMAX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void J_ymax_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_ymax(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);
    assert_size_matrix(var2, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_ymax_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_YMAX_HH
