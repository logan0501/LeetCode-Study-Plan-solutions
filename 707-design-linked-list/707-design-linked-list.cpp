class MyLinkedList {
    class Node{
        public:
        int val;
        Node* next;
        Node* prev;
        
        Node(int val,Node*prev,Node* next): val(val) ,prev(prev) ,next(next) {}
        Node(int val): Node(val,nullptr,nullptr){}
    };
    Node* head,*tail;
public:
    // O(1)
    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }
    
    //O(N)
    int get(int index) {
        Node* cur = head;
        for(int i=0;i<index && cur;++i)
            cur = cur->next;
        
        if(!cur) return -1;
        return cur->val;
    }
    
    //O(1)
    void addAtHead(int val) {
        head = new Node(val,nullptr,head);
        if(head->next)
            head->next->prev = head;
        else tail = head;
    }
    
    //O(1)
    void addAtTail(int val) {
        if(head == nullptr) addAtHead(val);
        else{
            tail->next = new Node(val,tail,nullptr);
            tail = tail->next;
        }
    }
    
    //O(N)
    void addAtIndex(int index, int val) {
        if(index==0) addAtHead(val);
        else{
            Node* pre = head;
            for(int i=1;i<index && pre; ++i)
                pre = pre->next;
            
            if(pre){
               pre->next = new Node(val,pre,pre->next); 
               if(!pre->next->next) tail = pre->next;
            }
                
        }
    }
    
    //O(N)
    void deleteAtIndex(int index) {
        if(index==0){
            if(head){
                Node* delNode = head;
                head = head->next;
                if(head)
                    head->prev = nullptr;
                else tail=nullptr;
                delete delNode;
            }
        }else{
            Node* pre = head;
            for(int i=1;i<index && pre; ++i)
                pre = pre->next;
            
            if(pre && pre->next){
                Node* delNode = pre->next;
                pre->next = delNode->next;
                if(pre->next)
                    pre->next->prev = pre;
                else tail = pre;
                delete delNode;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */