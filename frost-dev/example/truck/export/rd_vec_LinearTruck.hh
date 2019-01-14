/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:01 GMT-05:00
 */

#ifndef RD_VEC_LINEARTRUCK_HH
#define RD_VEC_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void rd_vec_LinearTruck_raw(double *p_output1, const double *var1,const double *var2);

  inline void rd_vec_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 8, 1);
    assert_size_matrix(var2, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 8, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    rd_vec_LinearTruck_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // RD_VEC_LINEARTRUCK_HH
