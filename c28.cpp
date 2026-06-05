//Bubble sort:

#include<iostream>

void sort(int array[], int size) {

    for(int i = 0; i < size-1; i++) {

        for(int j =0; j< size-i-1; j++) {

            if(array[j] > array[j+1]) {

                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for( int i = 0; i<size; i++) {

        std::cout<<array[i]<<'\t';
    }
}

int main() {

    int array[] = {10,6,2,1,3,7,8,9,5,4};\

    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);

    return 0;

}