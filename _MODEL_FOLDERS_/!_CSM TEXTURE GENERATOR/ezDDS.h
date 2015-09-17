/*
	Jonathan Dummer

	simple DDS reader / writer class for OpenGL
	(does not support many formats)

	should include OpenGL.h before this file
*/

#ifndef __OPENGL_DDS_CLASS__
#define __OPENGL_DDS_CLASS__

class ezDDS
{
private:

    struct DDPixelFormat
    {
        unsigned int size;
        unsigned int flags;
        unsigned int fourCC;
        unsigned int bpp;
        unsigned int redMask;
        unsigned int greenMask;
        unsigned int blueMask;
        unsigned int alphaMask;
    };

    struct DDSCaps
    {
        unsigned int caps;
        unsigned int caps2;
        unsigned int caps3;
        unsigned int caps4;
    };

    struct DDColorKey
    {
        unsigned int lowVal;
        unsigned int highVal;
    };

    struct DDSurfaceDesc
    {
        unsigned int size;
        unsigned int flags;
        unsigned int height;
        unsigned int width;
        unsigned int pitch;
        unsigned int depth;
        unsigned int mipMapLevels;
        unsigned int alphaBitDepth;
        unsigned int reserved;
        unsigned int surface;

        DDColorKey ckDestOverlay;
        DDColorKey ckDestBlt;
        DDColorKey ckSrcOverlay;
        DDColorKey ckSrcBlt;

        DDPixelFormat format;
        DDSCaps caps;

        unsigned int textureStage;
    };

    //	info about this particular DDS image
    unsigned int width, height;
    unsigned int channels, mipmaps;

    //	actual pixel data
    char *data;
    unsigned int data_size;

public:

	ezDDS (void);
	~ezDDS (void);

    //	for creating a DDS image
    bool Create_DDS (unsigned int w, unsigned int h, unsigned int chans, bool use_mipmaps);
    bool Set_Mipmap_BGRA (unsigned int map_level, const char *map_data);
    bool Save_DDS_Mipmap_Uncompressed (const char *file_name);

    //	for loading one
    bool Load_DDS (const char *file_name);
    unsigned int Upload_OpenGL_Texture (void);
    unsigned int Get_DDS_Width (void);
    unsigned int Get_DDS_Height (void);
    unsigned int Get_DDS_Channels (void);
    unsigned int Get_DDS_Mipmaps (void);
    bool Get_Mipmap_BGRA (unsigned int map_level, char *map_data);

    //	other stuff
    void Clear (void);
};

#endif
