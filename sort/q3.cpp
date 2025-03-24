static void sortSegment(T* start, T* end, int segment_idx, int cur_segment_total){
    int n=end-start;
    for(int i=segment_idx;i<n;i+=cur_segment_total){
        for(int j=i+cur_segment_total; j<n; j+=cur_segment_total){
            if(start[j]<start[i]){
                int temp=start[j];
                start[j]=start[i];
                start[i]=temp;
            }
        }
    }
} 
static void ShellSort(T* start, T* end, int* num_segment_list, int num_phases){
    for(int i=num_phases-1;i>=0;i--){
        cout<<num_segment_list[i]<<" segments: ";
        for(int j=0;j<num_segment_list[i];j++){
            sortSegment(start,end,j,num_segment_list[i]);
        }
    printArray(start,end);
    }
}