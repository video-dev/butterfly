#ifndef __LIB_H_INCLUDED__
#define __LIB_H_INCLUDED__

#include "crow_all.h"

using namespace std;

struct VideoChunkInfo {
  string        filename;
  long          bitrate;
  short         width;
  short         height;
};

bool is_request_valid(const crow::request&);

stringstream extract(VideoChunkInfo);

stringstream transcode(stringstream);

#endif
