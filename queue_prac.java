public class queue_prac {
    class MyQueue {
        private int[] data;
        private int front;
        private int rear;
        private int capacity;
        private int size;

        public MyQueue(int size) {
            data = new int[size];
            capacity = size;
            front = 0;
            rear = -1;
            this.size = 0;
        }

        public void enqueue(int value) {
            if (size == capacity) {
                System.out.println("Queue Overflow");
                return;
            }
            rear = (rear + 1) % capacity;
            data[rear] = value;
            size++;
        }

        public int dequeue() {
            if (size == 0) {
                System.out.println("Queue Underflow");
                return -1;
            }
            int value = data[front];
            front = (front + 1) % capacity;
            size--;
            return value;
        }

        public int peek() {
            if (size == 0) {
                System.out.println("Queue is empty");
                return -1;
            }
            return data[front];
        }

        public boolean isEmpty() {
            return size == 0;
        }

        public boolean isFull() {
            return size == capacity;
        }

        public int size() {
            return size;
        }
        
    }
}
