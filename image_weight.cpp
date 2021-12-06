#include "image_weight.h"
#include <algorithm>

double ComputeImageWeight(const Params &params, const Image &image) {
    Function function = MakeWeightFunction(params, image);
    return function.Apply(image.quality);
}

double ComputeQualityByWeight(const Params &params, const Image &image, double weight) {
    Function function = MakeWeightFunction(params, image);
    function.Invert();
    return function.Apply(weight);
}

FunctionPart::FunctionPart(char new_operation, double new_value) {
    operation = new_operation;
    value = new_value;
}

double FunctionPart::Apply(double source_value) const {
    switch (operation) {
        case '+':
            return source_value + value;
        case '-':
            return source_value - value;
        case '*':
            return source_value * value;
        case '/':
            return source_value / value;
    }
}

void FunctionPart::Invert() {
    switch (operation) {
        case '+':
            operation = '-';
            break;
        case '-':
            operation = '+';
            break;
        case '*':
            operation = '/';
            break;
        case '/':
            operation = '*';
            break;
    }
}

void Function::AddPart(char operation, double value) {
    parts.push_back({operation, value});
}

double Function::Apply(double value) const {
    for (const FunctionPart& part : parts) {
        value = part.Apply(value);
    }
    return value;
}

void Function::Invert() {
    for(FunctionPart& part : parts) {
        part.Invert();
    }
    std::reverse(parts.begin(), parts.end());
}

Function MakeWeightFunction(const Params& params, const Image& image) {
    Function function;
    function.AddPart('*', params.a);
    function.AddPart('-', image.freshness * params.b);
    function.AddPart('+', image.rating * params.c);
    return function;
}
