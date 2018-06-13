//
// Created by Nitzan on 11/06/2018.
//

#ifndef WET2_CLAN_H
#define WET2_CLAN_H

#include "Player.h"
#include "Tree.h"
#include "Pair.h"

#define nullptr 0

class Clan {
    int id;
    Tree<Player, Pair>* players;
    int index_in_heap;
    int num_of_players;
    bool is_active;

public:
    explicit Clan(int clan_id, int index);
    ~Clan();
    Clan (const Clan& clan) = delete;
    void addPlayerToClan ();
    int getId ();
    void setId (int num);
    void setIndex (int num);
    bool getIsActive();
    void setNotActive()
    int getNumOfPlayers();
};

#endif //WET2_CLAN_H
