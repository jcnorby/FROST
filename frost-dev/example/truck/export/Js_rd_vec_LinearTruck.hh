/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:02:13 GMT-05:00
 */

#ifndef JS_RD_VEC_LINEARTRUCK_HH
#define JS_RD_VEC_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void Js_rd_vec_LinearTruck_raw(double *p_output1, const double *var1);

  inline void Js_rd_vec_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_rd_vec_LinearTruck_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_RD_VEC_LINEARTRUCK_HH
