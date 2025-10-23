#ifndef GLASSNODE_H
#define GLASSNODE_H

#include <string>
using namespace std;

class GlassNode {

	public:
		string glassName;
    	string address;
    	string roomLoc;
    	string glassType;
    	string hardware;
    	int dueDate;
    	double x,y,z;
		GlassNode* next;
		
		//Default constructor
		GlassNode() {
		    glassName = "N/A";
    	    address = "N/A";
    		roomLoc = "N/A";
    		glassType = "N/A";
    		hardware = "N/A";
    		dueDate = 0;
    		x,y,z = 0;
			next = NULL;
		}
        // Paramater Constructor
		GlassNode(string glassName, string address, string roomLoc, string glassType, string hardware, 
		int dueDate, double x, double y, double z)
		{
			this->glassName = glassName;
			this->address = address;
			this->roomLoc = roomLoc;
			this->glassType = glassType;
			this->hardware = hardware;
			this->dueDate = dueDate;
			this->x = x;
			this->y = y;
			this->z = z;
			this->next = NULL;
		}
		//Setter and Getter for encapsulation (NEEDED)
};

#endif