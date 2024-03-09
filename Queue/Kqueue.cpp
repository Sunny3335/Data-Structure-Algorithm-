#include <bits/stdc++.h>
using namespace std;

class Kqueue{
    private:
    int n;
    int k;
    int *front;
    int *rear;
    int *arr;
    int freeSpot;
    int *next;

    public:
    Kqueue(int n, int k){
        this->n = n;
        this->k = k;
        front = new int[k];
        rear = new int[k];
        for (int i = 0; i < k;i++){
            front[i] = -1;
            rear[i] = -1;
        }
        next = new int[n];
        for (int i = 0; i < n;i++){
            next[i] = i + 1;
        }
        next[n - 1] = -1;
        arr = new int[n];
        freeSpot = 0;
    }

    // for enqueue
    void enqueue(int data, int qn){
        // in case of overflow
        if(freeSpot==-1){
            cout << "no empty space" << endl;
            return ;
        }
        // find first free index
        int index = freeSpot;

        //update the freeSpot
        freeSpot = next[index];

        // check whether the first element
        if(front[qn-1]==-1){
            front[qn - 1] = index;
        }else{
            // link new element to prev element
            next[rear[qn - 1]] = index;
        }

        // update the next
        next[index] = -1;

        // update rear
        next[qn - 1] = index;

        //push element
        arr[index] = data;
    }

    // for dequeue
    int dequeue(int qn){
        // underflow
        if(front[qn-1]==-1){
            cout << "under flow" << endl;
            return -1;
        }

        //find index to pop
        int index = front[qn - 1];

        // front ko aage badhao
        front[qn - 1] = next[index];

        // freeSlot ko manage kro
        next[index] = freeSpot;
        freeSpot=index;
        return arr[index];
    }
};

int main(){

    Kqueue q(10,3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

    return 0;
}