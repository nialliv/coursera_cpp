#include <vector>
#include <algorithm>

using namespace std;

class FunctionPart {
  private:
    char operation;
    double value;
  public:
    FunctionPart(char operation, double value) {
        this->operation = operation;
        this->value = value;
    }
    double Apply (double value) const {
        if(operation == '+') {
            return value + this->value;
        } else {
            return value - this->value;
        }
    }
    void Invert() {
        if(operation == '+') {
            operation = '-';
        } else {
            operation = '+';
        }

    }
};

class Function {
  private:
    std::vector<FunctionPart> parts;
  public:
    void AddPart (char operation, double value) {
        parts.push_back({operation, value});
    }
    double Apply(double value) const {
        for (const FunctionPart& part : parts) {
            value = part.Apply(value);
        }
        return value;
    }
    void Invert() {
        for (FunctionPart& part : parts) {
            part.Invert();
        }
        std::reverse(parts.begin(), parts.end());
    }
};
