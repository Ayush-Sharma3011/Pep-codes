class MyStack{
    private int[] data;
    private int top;
    private int capacity;

    public MyStack(int size){
        data = new int[size];
        capacity = size;
        top = -1;
    }

    public void push(int value){
        if(top == capacity - 1){
            System.out.println("Stack Overflow");
            return;
        }
        data[++top] = value;
    }

    public int pop(){
        if(top == -1){
            System.out.println("Stack Underflow");
            return -1;
        }
        return data[top--];
    }

    public int peek(){
        if(top == -1){
            System.out.println("Stack is empty");
            return -1;
        }
        return data[top];
    }

    public boolean isEmpty(){
        return top == -1;
    }

    public boolean isFull(){
        return top == capacity - 1;
    }

    public int size(){
        return top + 1;
    }

    public static void main(String[] args) {
        MyStack stack = new MyStack(5);
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println("Top element: " + stack.peek());
        System.out.println("Stack size: " + stack.size());
        System.out.println("Popped element: " + stack.pop());
        System.out.println("Stack size after pop: " + stack.size());
    }
}