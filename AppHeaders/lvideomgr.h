#ifndef __LVIDEOMGR_H__
#define __LVIDEOMGR_H__

class VideoInst;
typedef VideoInst* HVIDEO;

class LVideoMgr
{
	virtual DRESULT StartOnScreenVideo(char *pFilename, uint32 flags, HVIDEO &hVideo)=0;
	virtual DRESULT StartTextureVideo(char *pFilename, uint32 flags, HVIDEO &hVideo)=0;

	// The following 3 functions are almost identical except they call a single different function after an inner loop
	virtual DRESULT UpdateVideo(HVIDEO hVideo)=0;
	virtual DRESULT UpdateVideo(HVIDEO hVideo)=0; // GetVideoStatus?
	virtual DRESULT UpdateVideo(HVIDEO hVideo)=0; // StopVideo?

	// Just guessing the second argument is a HPOLY for now
	virtual DRESULT BindTextureToVideoPoly(HVIDEO hVideo, HPOLY hPoly)=0;
}

#endif // __LVIDEOMGR_H__