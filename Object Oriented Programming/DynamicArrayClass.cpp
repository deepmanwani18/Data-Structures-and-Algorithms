class DynamicArray {
    int *arr;
    int size;
    int nextIndex;
    public: 
    //Constructor
    DynamicArray() {
        arr = new int[5];
        nextIndex = 0;
        size = 5;
    }
    //Copy Constructor
    DynamicArray(DynamicArray const &d) {
        this->size = d.size;
        this->nextIndex = d.nextIndex;
        // this->data = d.data;        //shallow copy, must be avoided
        //deep copy
        this->arr = new int[d.size];
        for(int i = 0; i < nextIndex; i++) {
            this->arr[i] = d.arr[i];
        }
    }
    //Copy Assignment Operator
    void operator=(DynamicArray const &d) {
        this->size = d.size;
        this->nextIndex = d.nextIndex;
        // this->data = d.data;        //shallow copy, must be avoided
        //deep copy
        this->arr = new int[d.size];
        for(int i = 0; i < nextIndex; i++) {
            this->arr[i] = d.arr[i];
        }
    }
    void push(int number) {
        if(nextIndex == size) {
            int* newArr = new int[size*2];
            for(int i = 0; i < size; i++) {
                newArr[i] = arr[i];
            }
            delete []arr;
            arr = newArr;
            size *= 2;
        }
        arr[nextIndex] = number;
        nextIndex++;
    }
    int getNumber(int i) {
        if(i >=  nextIndex) {
            return -1;
        }
        return arr[i];
    }
    void insert(int i, int number) {
        if(i > nextIndex) {
            return;
        }
        if(i == nextIndex) {
            push(number); 
        }
        if(i < nextIndex) {
            arr[i] = number;
        }
    }
    void print() {
        for(int i = 0; i < nextIndex; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }


};