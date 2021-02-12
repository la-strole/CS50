#include <stdio.h>

int *sort_array(int array[]);
int *merge(int left[], int right[]);

int main(void){
    int a[] = {6,7,8,3,4,2,0,1,8,6,11};
    size_t sz = sizeof a / sizeof *a;
    int left = sz / 2;
    int right = sz - left;
    printf("size = %lu, left = %i, right =%i", sz, left, right);
        
}

int *sort_array(int array[]){
    // base case 
    size_t size = sizeof array / sizeof *array;
    if (size == 1){
        return array;
    }

    else{
        int *left = malloc((int)size / 2);
        int *right = malloc(size - ((int)size / 2));
        int *p_l = sort_array(left);
        int *p_r = sort_array(right);
        int *p_m = merge(left, right);
        return (&p_m);
     
    }
}

int *merge(int left[], int right[]){
    
    size_t left_size = sizeof left / sizeof *left;
    size_t right_size = sizeof right / sizeof *right;
    
    int *merge_array = malloc((int)(left_size + right_size));
    
    int min_size;
    
    if (left_size <= right_size){
        min_size = left_size;
    }
    else
        min_size = right_size;
    

    int l_index = 0;
    int r_index = 0;
    for (int i=0; i < min_size; i++){
        
        if (left[l_index] < right[r_index]){
            merge_array[i] = left[l_index];
            l_index += 1;
        }
        else{
            merge_array[i] = right[r_index];
            r_index += 1;
        }
    }

    if (l_index < left_size - 1){
        int delta = 1;
        for (int i=l_index+r_index; i<left_size+right_size; i++){
            merge_array[i] = left[l_index + delta];
            delta += 1;
        }
    }
    else{
        int delta = 1;
        for (int i=l_index+r_index; i<left_size+right_size; i++){
            merge_array[i] = left[r_index + delta];
            delta += 1;
        }
    }
    
    return merge_array;
}