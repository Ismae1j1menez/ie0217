#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

template <typename T>
class Statistics {
    public:
        // Constuctor que obtiene como argumento un vector y lo ingresa en el miembro data
        Statistics(const std::vector<T>& data) : data(data){
            // Excepción si el vector es empty
            if(data.empty()){
                // Mensaje que agarra el catch
                throw std::invalid_argument("La lista de datos debe contener elementos");
            }
        }

        // metodo para el promedio de los datos
        double mean() const {
            // Inicia la suma en 0
            T sum = 0;
            // Lw agrega el valor de los datos a sum
            // value : data es para decirle a un for que itere sobre el vector
            for(const T& value : data){
                sum += value; 
            }
            
            // Hace un casteo de sum a double para scar el promedio
            return static_cast<double>(sum) / data.size();
        }


        double standardDeviation() const {
            double meanValue = mean();
            double sumSquares = 0; 

            // Bucle que calcula la diferencia de cada valor y se agrega a sumSquares
            for (const T& value : data){
                sumSquares += (value -meanValue) * (value -meanValue);
            }

            // Devulve la varianza
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
        // Imporatante que si a standardDeviation no se le agrega un parentesis se toma como una variable
        // que no existe
        std::cout << "Desviacion estandar de intData: " << statsInt.standardDeviation() << std::endl;

        /*******************/
        std::vector<double> doubleData = {1.5, 2.5, 3.5, 4.5, 5.5};
        Statistics<double> statsDouble(doubleData);
        std::cout << "Media de statsDouble: " << statsDouble.mean() << std::endl; 
        std::cout << "Desviacion estandar de statsDouble: " << statsDouble.standardDeviation() << std::endl;


        /*******************/
        // Va a tomar la excepcion dada en el constructor
        std::vector<int> emptyData;
        Statistics<int> statsEmpty(emptyData);

    } catch (const std::invalid_argument& e) {
        std::cerr << "Excepcion encontrada: " << e.what() << std::endl; 
    }
    return 0; 
}