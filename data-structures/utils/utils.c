void* int_constructor(void* data)
{   
    void* ptr = malloc(sizeof(int));
    memcpy(ptr, data, sizeof(int));
    return ptr;
} 

void int_destructor(void* data)
{
    free(data);
}

int int_comparator(const void* a, const void* b)
{
    if(*(int*)a < *(int*)b){
        return -1;
    } else if (*(int*) a == *(int*)b){
        return 0;
    }
    return 1;
}