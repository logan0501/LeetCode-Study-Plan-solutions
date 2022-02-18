class MyCircularQueue {
private:
    vector<int> queue;
    int front, rear, k, size;
public:
    MyCircularQueue(int k): queue(k, 0), k(k) {
        front = 0;
        rear = -1;
        size = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        rear = (rear+1)%k;
        queue[rear] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = (front+1)%k;
        size--;
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : queue[front];
    }
    
    int Rear() {
        return isEmpty() ? -1 : queue[rear];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == k;
    }
};