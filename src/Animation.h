#ifndef ANIMATION_H
#define ANIMATION_H

void Animation_resetTimers();
void Animation_updateTimers(unsigned int currentTime);

int Animation_getIndexForCityMap(int graphicId, int gridOffset);
int Animation_getIndexForEmpireMap(int graphicId, int currentIndex);

#endif
