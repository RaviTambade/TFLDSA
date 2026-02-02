struct Queue {
    int front, rear;
    int capacity;
    int* array;
};

struct Queue* createQueue(int capacity);
void enqueue(struct Queue* queue, int item); //insert into queue : Frist IN
int dequeue(struct Queue* queue); //retrive element and remove from queue : First OUT
void display(struct Queue* queue); //display  all Items queue 