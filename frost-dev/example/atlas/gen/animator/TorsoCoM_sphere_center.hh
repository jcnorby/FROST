/*
 * Automatically Generated from Mathematica.
 * Wed 27 Dec 2017 22:39:16 GMT-06:00
 */

#ifndef TORSOCOM_SPHERE_CENTER_HH
#define TORSOCOM_SPHERE_CENTER_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void TorsoCoM_sphere_center_raw(double *p_output1, const double *var1);

  inline void TorsoCoM_sphere_center(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 21, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    TorsoCoM_sphere_center_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORSOCOM_SPHERE_CENTER_HH
