#ifndef __PORTAL_HPP
#define __PORTAL_HPP

#include "engine/Box.hpp"
#include "util/Vector3f.hpp"
class Map; // Forward declaration
#include "GameMap.hpp"

using namespace glPortal::engine;
using namespace util;

enum PORTAL_DIR { PD_RIGHT, PD_FRONT, PD_LEFT, PD_BACK, PD_NONE }; /**< Possible direction a portal can face */
enum PORTAL_COLOR { PC_BLUE, PC_ORANGE }; /**< Colors a portal can have */

/**
 * Class for controlling and drawing portals
 */
class Portal {
public:
	Portal() : dir(PD_NONE), active(false) { }

        void place(float x, float y, float z, PORTAL_DIR dir, GameMap& gameMap);
        void placeOnBox(Box &box, float hitx, float hity, float hitz, GameMap& gameMap);
	bool inPortal(Box &box);
	bool throughPortal(float r, float s, float t);
	void disable();
	float getFromRotation();
	float getToRotation();
	void drawStencil();
	void drawOutline(PORTAL_COLOR color);

	Vector3f position;
	PORTAL_DIR dir; /**< Direction portal is facing */
	bool active;	/**< True if the portal is currently active */
};

#endif
