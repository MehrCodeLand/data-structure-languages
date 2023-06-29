class Algo{
    public:
    void InsertionSort(int nums[] , int size);
};

void Algo::InsertionSort(int nums[] , int size ){
    int i = 1 ;
    for( i ; i < size ; i++ ){
        int key = nums[i] ;
        int j = i - 1 ;

        while( j >= 0 && nums[j] >= key){
            nums[j + 1 ] = nums[j];
            --j ;
        }

        nums[j + 1 ] = key ;
    }
}
