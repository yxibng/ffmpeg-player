//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavfilter/avfilter.h>
#include <libavfilter/buffersrc.h>
#include <libavfilter/buffersink.h>
#include <libavutil/opt.h>
#include <libavutil/error.h>

static int READ_END_OF_FILE = AVERROR_EOF;

#define GL_SILENCE_DEPRECATION
#include <OpenGL/gl3.h>
