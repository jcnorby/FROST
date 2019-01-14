/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:01:44 GMT-05:00
 */

#ifndef J_AYCONT_LINEARTRUCK_HH
#define J_AYCONT_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void J_ayCont_LinearTruck_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_ayCont_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 6);
    assert_size_matrix(var2, 1, 6);

	
    // - Outputs
    assert_size_matrix(p_output1, 12, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_ayCont_LinearTruck_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_AYCONT_LINEARTRUCK_HH
