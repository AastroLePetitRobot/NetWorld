#ifndef NETWORLD_H
#define NETWORLD_H

struct Str_Node {
    double x, y;
    int mur;
};
typedef struct Str_Node Node;

struct Str_NetWorld {
    int size;
    Node * nodes;
};
typedef struct Str_NetWorld NetWorld;

//Joueur, Arme, Bonus
struct Str_Weapon{
    char name[100];
    int damage;
    Node * node;
};
typedef struct Str_Weapon Weapon;
    
struct Str_Player{
    Node * node;
    char name[100];
    int hp;
    Weapon * weapon;
};
typedef struct Str_Player Player;
 
struct Str_Bonus{
    Node * node;
    char type[100];
};
typedef struct Str_Bonus Bonus;
    
    

// Constructor / Destructor
NetWorld * NetWorld_new(int aSize);
void NetWorld_delete(NetWorld * aWorld);

// Initialization
void NetWorld_initNodePosition(NetWorld * self, int iNode, double x, double y); // position must be an float[size][2] array...

// To String
void NetWorld_print(NetWorld * self);

#endif //NETWORLD_H
