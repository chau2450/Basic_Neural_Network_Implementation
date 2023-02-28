//
// Created by ivanbliminse on 2/27/23.
//

#ifndef NEURAL_NETWORK_IMPLEMENTATION_DENSE_H
#define NEURAL_NETWORK_IMPLEMENTATION_DENSE_H

#include "Layer.h"
#include <Eigen/Dense>

class Dense: public Layer{
private:
    Dense(int inputSize, int outputSize);

    ~Dense();

    Eigen::MatrixXd weights;

    Eigen::MatrixXd bias;


public:

    Eigen::MatrixXd forward(Eigen::MatrixXd input);

    Eigen::MatrixXd  backward(Eigen::MatrixXd input);

};


#endif //NEURAL_NETWORK_IMPLEMENTATION_DENSE_H
