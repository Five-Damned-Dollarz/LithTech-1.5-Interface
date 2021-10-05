#ifndef __LVIDEOMGR_H__
#define __LVIDEOMGR_H__

class LVideoMgr
{
	// I'm guessing that pUnk1 in all of these functions is a video handle of some sort
	virtual DRESULT StartOnScreenVideo(void *pUnk1, void *unk2, void *unk3)=0;
	virtual DRESULT StartTextureVideo(void *pUnk1, void *unk2, void *unk3)=0;

	// The following 3 functions are almost identical except they call a single different function after an inner loop
	virtual DRESULT UpdateVideo(void *pUnk1)=0;
	virtual DRESULT UpdateVideo(void *pUnk1)=0;
	virtual DRESULT UpdateVideo(void *pUnk1)=0;

	// Just guessing the second argument is a HPOLY for now
	virtual DRESULT BindTextureToVideoPoly(void *pUnk1, HPOLY hPoly)=0;
}

#endif // __LVIDEOMGR_H__