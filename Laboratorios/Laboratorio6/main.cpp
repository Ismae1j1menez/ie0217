#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
    public:
        Statistics(const std::vector<T>& data) : data(data){
            if(data.empty()){
                throw std::invalid_argument("La lista de datos debe contener elementos");
            }
        }

        double mean() const {
            T sum = 0;
            for(const T& value : data){
                sum += value; 
            }
            return static_cast<double>(sum) / data.size();
        }

        double standardDeviation() const {
            double meanValue = mean();
            double sumSquares = 0; 

            for (const T& value : data){
                sumSquares += (value -meanValue) * (value -meanValue);
            }

            return std::sqrt(sumSquares / data.size());
        }

    private:
        std::vector<T> data; 
};

int main(){
    try{
        std::vector<int> intData = {1, 2, 3, 4, 5};
        Statistics<int> statsInt(intData);
        std::cout << "Media de intData: " << statsInt.mean() << std::endl; 
        std::cout << "Desviacion estandar de intData: " << statsInt.standardDeviation() << std::endl;

        /*******************/
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
        Statistics<double> statsDouble(doubleData);
        std::cout << "Media de statsDouble: " << statsDouble.mean() << std::endl; 
        std::cout << "Desviacion estandar de statsDouble: " << statsDouble.standardDeviation() << std::endl;


        /*******************/
        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData);

    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl; 
    }
    return 0; 
}