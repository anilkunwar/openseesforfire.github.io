
#ifndef SimpleEntity_h
#define SimpleEntity_h

#include <TaggedObject.h>
#include <MovableObject.h>
#include <Vector.h>
#include <ID.h>

class ID;

class Simple_Entity: public TaggedObject
{
public:
	Simple_Entity(int tag, int EntityTypeTag);
	
	virtual ~Simple_Entity ();
    //virtual int GetEntityTypeTag();
	//int cTag;
	
	virtual int getEntityTypeTag(void);
  virtual void setMeshTag(int meshTag);
  virtual int getMeshTag(void);
  virtual int RefineSeeds(int SeedTag, const Vector&RefinedSeedsInfo);

  
   // virtual int getTag(void);
	virtual int InitialMeshCtrl(Vector&);
	
	virtual bool InitialSeeds(void)=0;
	virtual const Vector& GetSeeds(int)=0 ;
  	virtual int GetNumofNodes()=0;
  virtual int GetNumofEles()=0;
	virtual const ID& GetNumCtrlID()=0;
	virtual void  Print(OPS_Stream&, int = 0) {return;};

protected:
	//int tag;
  int EntityTypeTag;
  int MeshTag;
};
#endif