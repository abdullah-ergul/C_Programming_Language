int* addTwoNumbers(int* list1, int* list2){
    int *newList, i=0, l1l= sizeof(list1)/4, l2l= sizeof(list2)/4, j, k;

    if(l1l > l2l){
        newList = (int*)calloc((l1l+1),4);
        j= l2l;
        k=j;

        while(j>0){
            newList[i]= list1[i] + list2[i];
            if(newList[i] > 9){
                newList[i+1]++;
                newList[i] -= 10;
            }
            j--; i++;
        }
        k= l1l-k;

        while(k>0){
            newList[i]= list1[i];
            i++; k--;
        }
    }
    else{
        newList = (int*)calloc((l2l+1),4);
        j= l1l;
        k=j;

        while(j>0){
            newList[i]= list1[i] + list2[i];
            if(newList[i] > 9){
                newList[i+1]++;
                newList[i] -= 10;
            }
            j--; i++;
        }
        k= l2l-k;

        while(k>0){
            newList[i]= list2[i];
            i++; k--;
        }
    }

    return newList;
}