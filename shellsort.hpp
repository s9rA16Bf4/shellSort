#ifndef SHELLSORT_HPP
#define SHELLSORT_HPP

#include <vector>
#include <iostream>

template<typename T>
class shellSort{
private:
  std::vector<T> internalVector; // This will hold our unsorted and hopefully sorted list

public:
  std::vector<T> getVector(); // Returns internalVector
  void sort(int stepLength); // Sorts our vector
  void loadVector(std::vector<T> &originVector);
};

template<typename T>
std::vector<T> shellSort<T>::getVector(){ return this->internalVector; }

template<typename T>
void shellSort<T>::loadVector(std::vector<T> &originVector){ this->internalVector = originVector; }

template<typename T>
void shellSort<T>::sort(int stepLength){
  while(stepLength > 0){
    for (unsigned int i = 0; i < this->internalVector.size()-1; i++){
      for (unsigned int p = i+stepLength; p < this->internalVector.size(); p *= 2){
        if (this->internalVector[i] > this->internalVector[p]){
          T temp = std::move(this->internalVector[p]);
          this->internalVector[p] = std::move(this->internalVector[i]);
          this->internalVector[i] = std::move(temp);
        }
      }
    }
    stepLength--;
  }
}


#endif
