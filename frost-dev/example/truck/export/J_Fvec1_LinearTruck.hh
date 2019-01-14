/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:05 GMT-05:00
 */

#ifndef J_FVEC1_LINEARTRUCK_HH
#define J_FVEC1_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void J_Fvec1_LinearTruck_raw(double *p_output1, const double *var1);

  inline void J_Fvec1_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 16, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_Fvec1_LinearTruck_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_FVEC1_LINEARTRUCK_HH
