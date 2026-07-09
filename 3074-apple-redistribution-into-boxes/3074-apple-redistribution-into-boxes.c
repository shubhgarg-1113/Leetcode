int sorting(const void *a, const void *b) {
    int int_a = *(const int *)a;
    int int_b = *(const int *)b;
    // Return b - a for descending order
    return (int_b - int_a); 
}
int minimumBoxes(int* apple, int appleSize, int* capacity, int capacitySize) {
    int t_apple = 0;
    for(int i = 0; i < appleSize; i++){
        t_apple += apple[i];
    }
    // sort the capacity array decendingly to get the min amount of box using qsort 
    qsort(capacity, capacitySize, sizeof(int), sorting);
    int temp = t_apple;
    int i = 0;
    while(temp > 0){
        
        temp -= capacity[i];
        i++;
    }
    return i;
}