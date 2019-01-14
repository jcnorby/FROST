/*
 * Automatically Generated from Mathematica.
 * Wed 7 Mar 2018 18:11:45 GMT-05:00
 */

#ifndef U_FRICTION_CONE_FOOT_HH
#define U_FRICTION_CONE_FOOT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void u_friction_cone_foot_raw(double *p_output1, const double *var1,const double *var2);

  inline void u_friction_cone_foot(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 3, 1);
    assert_size_matrix(var2, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_friction_cone_foot_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_FRICTION_CONE_FOOT_HH
