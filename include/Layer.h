//
// Created by ivanbliminse on 2/27/23.
//

#ifndef NEURAL_NETWORK_IMPLEMENTATION_LAYER_H
#define NEURAL_NETWORK_IMPLEMENTATION_LAYER_H

#include <iostream>
#include <vector>
#include <random>
#include <Eigen/Dense>

using namespace std;

class Layer {
private:
    ~Layer();

    vector<int> inputVector;
    vector<int> outPutVector;
    const float LEARNING_RATE = 0.001;

protected:
    Layer();

public:
    vector<int> forward(vector<int> input);

    vector<int>  backward(vector<int> input);

};


#endif //NEURAL_NETWORK_IMPLEMENTATION_LAYER_H
