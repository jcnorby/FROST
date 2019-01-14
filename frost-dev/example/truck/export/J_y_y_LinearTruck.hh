/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:16 GMT-05:00
 */

#ifndef J_Y_Y_LINEARTRUCK_HH
#define J_Y_Y_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void J_y_y_LinearTruck_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_y_y_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);
    assert_size_matrix(var2, 6, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 9, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_y_y_LinearTruck_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_Y_Y_LINEARTRUCK_HH
