import java.io.*;
import java.util.*;
import java.util.Queue;

public class meanList{
  private Queue<Integer> q;
  private int max_size;

  public meanList(int size){
    q = new LinkedList();
    max_size = size;
    
    for (int i = 0; i < max_size + 1; i++){
      q.add(662);
    }
  }
  
  public void add(int n){
    q.remove();
    q.add(n);
  }
  
  public float mean(){
    Object[] array = q.toArray();
    int sum = 0;
    for (int i = 0; i < array.length - 1; i++){
      sum += (int)array[i];
    }
    return sum / array.length;
  }
}
