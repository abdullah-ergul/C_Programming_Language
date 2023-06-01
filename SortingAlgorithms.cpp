#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include "windows.h"

using namespace std;

int partition( int * a, int l, int r) {
   int pivot, i, j, t;
   pivot = a[l];
   i = l; j = r+1;

   while(1){
   	do ++i; while( a[i] <= pivot && i <= r );
   	do --j; while( a[j] > pivot );
   	if( i >= j ) break;
   	t = a[i]; a[i] = a[j]; a[j] = t;
   }
   t = a[l]; a[l] = a[j]; a[j] = t;
   return j;
}

void quickSort( int * a, int l, int r){
   int j;

   if( l < r ){
   	// divide and conquer
        j = partition( a, l, r);
       quickSort( a, l, j-1);
       quickSort( a, j+1, r);
   }
}

void merge(int* list,int low,int mid,int high,int size){
    int i, mi, k, lo, temp[size];

    lo = low;
    i = low;
    mi = mid + 1;
    while ((lo <= mid) && (mi <= high))
    {
        if (list[lo] <= list[mi])
        {
            temp[i] = list[lo];
            lo++;
        }
        else
        {
            temp[i] = list[mi];
            mi++;
        }
        i++;
    }
    if (lo > mid)
    {
        for (k = mi; k <= high; k++)
        {
            temp[i] = list[k];
            i++;
        }
    }
    else
    {
        for (k = lo; k <= mid; k++)
        {
             temp[i] = list[k];
             i++;
        }
    }

    for (k = low; k <= high; k++)
        list[k] = temp[k];
}

void merge_sort(int* a, int first, int last, int size) {

    if (first < last ){
        int middle = (first + last) / 2;
        merge_sort(a, first, middle, size);
        merge_sort(a, middle+1, last, size);
        merge(a, first, middle, last, size);
    }
}

void insertionSort(int* a, int size) {
    int key,i;
    for (int j = 1; j < size; j++) {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key){
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}

int* populateArray(int size) {

    int* a = new int[size];
    for (int i = 0; i < size; i++)
        a[i] = rand();
    return a;
}

int main() {
    int sizes[8] = {  500, 1000, 10000,100000,200000,300000,400000,500000 };
    srand(time(NULL));

    for (int i = 0; i < 8; i++) {
        int size = sizes[i];
        long long mergeSortTimeSum=0,insertionSortTimeSum=0,quickSortTimeSum=0 ;
        SYSTEMTIME time;
        int* a ;

        for(int j=1;j<=5;j++){
        //sayılar random üretildiği için 5 defa çalışıp sürelerin ortalamasi alinacak

            a = populateArray(size);
            GetSystemTime(&time);
            long before = (time.wMinute*60 * 1000)+(time.wSecond * 1000) + time.wMilliseconds;
            insertionSort(a, size);
            GetSystemTime(&time);
            long after = (time.wMinute*60 * 1000)+(time.wSecond * 1000) + time.wMilliseconds;
            insertionSortTimeSum+=after-before;

            a = populateArray(size);
            GetSystemTime(&time);
            before = (time.wMinute*60 * 1000)+(time.wSecond * 1000) + time.wMilliseconds;
            merge_sort(a, 0, size-1, size);
            GetSystemTime(&time);
            after = (time.wMinute*60 * 1000)+(time.wSecond * 1000) + time.wMilliseconds;
            mergeSortTimeSum+=after-before;

            a = populateArray(size);
            GetSystemTime(&time);
            before = (time.wMinute*60 * 1000)+(time.wSecond * 1000) + time.wMilliseconds;
            quickSort(a, 0, size-1);
            GetSystemTime(&time);
            after = (time.wMinute*60 * 1000)+(time.wSecond * 1000) + time.wMilliseconds;
            quickSortTimeSum+=after-before;
        }
        cout << "Size: "<<  size << " Merge Sort Time: " << mergeSortTimeSum/5<<"ms";
        cout << "  Insertion Sort Time: " << insertionSortTimeSum/5<<"ms";
        cout << "  Quick Sort Time: " << quickSortTimeSum/5 << "ms"<<endl;
      /*  ofstream myfile;
        myfile.open ("ordered.txt");
        for(int k=0;k<size;k++)
          myfile << a[k]<<",";
        myfile.close();
        */
    }
    return 0;
}