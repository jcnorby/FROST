/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:01:41 GMT-05:00
 */

#ifndef AYCONT_LINEARTRUCK_HH
#define AYCONT_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void ayCont_LinearTruck_raw(double *p_output1, const double *var1,const double *var2);

  inline void ayCont_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 6);
    assert_size_matrix(var2, 1, 6);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ayCont_LinearTruck_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // AYCONT_LINEARTRUCK_HH
