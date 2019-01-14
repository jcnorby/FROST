/*
 * Automatically Generated from Mathematica.
 * Fri 30 Nov 2018 17:01:50 GMT-05:00
 */

#ifndef JS_YMAXCONT_LINEARTRUCK_HH
#define JS_YMAXCONT_LINEARTRUCK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace truckopt
{

  void Js_ymaxCont_LinearTruck_raw(double *p_output1, const double *var1);

  inline void Js_ymaxCont_LinearTruck(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_ymaxCont_LinearTruck_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_YMAXCONT_LINEARTRUCK_HH
