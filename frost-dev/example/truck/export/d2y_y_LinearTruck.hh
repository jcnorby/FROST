/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:26 GMT-05:00
 */

#ifndef D2Y_Y_LINEARTRUCK_HH
#define D2Y_Y_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void d2y_y_LinearTruck_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void d2y_y_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);
    assert_size_matrix(var2, 8, 1);
    assert_size_matrix(var3, 6, 1);
    assert_size_matrix(var4, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    d2y_y_LinearTruck_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // D2Y_Y_LINEARTRUCK_HH
