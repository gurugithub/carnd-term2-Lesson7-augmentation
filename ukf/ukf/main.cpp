//
//  main.cpp
//  ukf
//
//  Created by Shetti, Guru on 6/11/17.
//  Copyright © 2017 Shetti, Guru. All rights reserved.
//

#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int main() {
    
    //Create a UKF instance
    UKF ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    MatrixXd Xsig_aug = MatrixXd(15, 7);
    ukf.AugmentedSigmaPoints(&Xsig_aug);
    
    return 0;
}
