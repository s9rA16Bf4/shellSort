# Shellsort
An easy and template based implementation of shellsort

## How to use ##
1) Include the .hpp in your project and import it
2) Once you have created a class object, there is three easy steps to do.<br/>
  a) use loadVector() to load the internal vector with the values you want to sort <br/>
  b) sort(stepLength) To sort the internal vector<br/>
  c) getVector() to get the sorted values<br/>

### Example ###
```
int main(){
  heapSort<int> ss;
  std::vector<int> unsorted = {27,34,21,56,38,13,45,6,14,33,84,12};

  ss.loadVector(unsorted);
  ss.sort();
  unsorted = ss.getVector();

  for(int e:unsorted){
    std::cout << e << std::endl;
  }
}
```

If there is any issue, open up a ticket and I will take a look at it
