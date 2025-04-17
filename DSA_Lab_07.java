public class DSA_Lab_07 {
    // Selection Sort
    // selection sort = repeatedly selects the smallest element from the unsorted portion of the array and swaps it with the first unsorted element.
    
    //				 Quadratic time O(n^2)
    //				 small data set = okay-ish
    //				 large data set = BAD (plz don't)
    
        // selection sort = search through an array and keep track of the minimum value during 
        //			         each iteration. At the end of each iteration, we swap values.
        
        //				 Quadratic time O(n^2)
        //				 small data set = okay
        //				 large data set = BAD
        //				 best case = O(n^2)
    
    public static void main(String[] args) {
        
        int array[] =  {9, 1, 8, 2, 7, 3, 6, 4, 5};
        
        selectionSort(array);
        
        for(int i : array) {
            System.out.print(i + " ");
        }
    }
    
    public static void selectionSort(int array[]) {
        for(int i =0; i< array.length-1;i++){
            int min=i;
            for(int j=i+1;j<array.length;j++){
                if(array[min]>array[j]){
                    min = j;
                }
            }
            int temp =array[min];
                    array[min]=array[i];
                    array[i] = temp;
        }
        
    }
}
