#include <vector>
#include <stdlib.h>

class Node{
    Node* left,* right,* up,* down;
    bool flag;
    public:
    Node(bool f = false){
        left = right = up = down = nullptr;
        flag = f;
    }
    void addLeft(Node* l, int stop = 0){
        left = l;
        if (l != nullptr && stop != 1)
            l->addRight(this, 1);
    }

    void addRight(Node* l, int stop = 0){
        right = l;
        if (l != nullptr && stop != 1)
        l->addLeft(this, 1);
    }

    void addUp(Node* l, int stop = 0){
        up = l;
        if (l != nullptr && stop != 1)
            l->addDown(this, 1);
    }

    void addDown(Node* l, int stop = 0){
        down = l;
        if (l != nullptr && stop != 1)
            l->addUp(this, 1);
    }
};


class Gen{
    Node* start;
    std::vector<Node*> files;
    
    public:
        Gen(int m, int randsize = 0){
            if (m == 0){
                while (randsize > 0){
                    randsize/=10;
                    m*=10;
                    m+=rand()%10;
                }
            }
            int temp = m;
            files.push_back(new Node);
            int j = 0;
            while (temp > 0){
                temp/=10;
                if (j == randsize){
                    files.push_back(new Node(1));
                }
                else{
                    files.push_back(new Node);
                }
                j++;
            }
            files.push_back(nullptr);
            files.push_back(nullptr);
            files.push_back(nullptr);

            files[0]->addUp(files[1]);

            int i = 1;
            while (m > 0){
                
                switch(m%10){ 
                    case 0:
                        break;
                    case 1:
                        files[i]->addRight(files[i+1]);
                        files[i]->addUp(files[i+2]);
                        break;
                    case 2:
                        files[i]->addDown(files[i+1]);
                        files[i]->addLeft(files[i+2]);
                        break;
                    case 3:
                        files[i]->addDown(files[i+1]);
                        files[i]->addUp(files[i+2]);
                        break;
                    case 4:
                        files[i]->addLeft(files[i+1]);
                        files[i]->addRight(files[i+2]);
                        break;
                    case 5:
                        files[i]->addDown(files[i+1]);
                        files[i]->addRight(files[i+2]);
                        break;
                    case 6:
                        files[i]->addRight(files[i+1]);
                        files[i]->addUp(files[i+2]);
                        files[i]->addDown(files[i+3]);
                        break;
                    case 7:
                        files[i]->addLeft(files[i+1]);
                        files[i]->addDown(files[i+2]);
                        files[i]->addRight(files[i+3]);
                        break;
                    case 8:
                        files[i]->addLeft(files[i+1]);
                        files[i]->addRight(files[i+3]);
                        files[i]->addUp(files[i+2]);
                        break;
                    case 9:
                        files[i]->addUp(files[i+1]);
                        files[i]->addDown(files[i+2]);
                        files[i]->addLeft(files[i+3]);
                        break;
                    default:
                        break;
                }
                i+=1;
                m/=10;
            }
            start = files[0];
        }
        Node* Start(){
            return start;
        }
};
