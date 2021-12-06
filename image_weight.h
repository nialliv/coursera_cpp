#pragma once
#include <iostream>
#include <vector>

struct Image {
    double quality;
    double freshness;
    double rating;
};

struct Params {
    double a;
    double b;
    double c;
};

class FunctionPart {
  public:
    FunctionPart(char new_operation, double new_value);
    double Apply(double source_value) const;
    void Invert();
  private:
    char operation;
    double value;
};

class Function {
  public:
    void AddPart(char operation, double value);
    double Apply(double value) const;
    void Invert();
  private:
    std::vector<FunctionPart> parts;
};

double ComputeImageWeight (const Params& params, const Image& image);
double ComputeQualityByWeight(const Params& params, const Image& image, double weight);
Function MakeWeightFunction(const Params& params, const Image& image);
