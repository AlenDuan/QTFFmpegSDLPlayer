#pragma once
#include "PacketQueue.h"
extern "C" {

#include <libavformat/avformat.h>

}
class Audio
{
public:
	Audio();
	~Audio();
	int getStreamIndex();
	void setStreamIndex(const int streamIndex);
	AVCodecContext *audioContext;
	AVStream *stream;
private:
	int streamIndex;
	PacketQueue audiaPackets;
};
