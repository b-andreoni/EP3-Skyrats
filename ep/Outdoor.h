#ifndef OUTDOOR_H
#define OUTDOOR_H

#pragma once
#include "Bateria.h"
#include "Drone.h"

class Outdoor: public Drone
{
public:
    Outdoor(float carga_mapear, float eficiencia, Bateria bateria);
    ~Outdoor();

    bool mapear ();
private:
    float carga_mapear;
};

#endif