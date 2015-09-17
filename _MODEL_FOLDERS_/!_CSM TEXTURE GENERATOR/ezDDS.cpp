/*
	Jonathan Dummer

	simple DDS reader / writer class for OpenGL
	(does not support many formats)

	should include OpenGL.h before this file
*/

#include <fstream>

#include "ezDDS.h"

ezDDS::ezDDS (void)
{
    //	constructor
    //	(make sure my pointer is going nowhere)
    data = NULL;
    Clear();
}

ezDDS::~ezDDS (void)
{
    //	Destructor
    Clear();
}

void ezDDS::Clear (void)
{
    //	just clear my data
    width = 0;
    height = 0;
    channels = 0;
    mipmaps = 0;

    //	and this data too
    delete [] data;
    data = NULL;
}

bool ezDDS::Create_DDS (unsigned int w, unsigned int h, unsigned int chans, bool use_mipmaps)
{
    Clear();

    //	simple error check
    if ((w < 1) || (h < 1) || (chans < 3) || (chans > 4))
        return (false);

    //	power of 2 check, and size computation
    unsigned int w2 = w, h2 = h, size = 0, mml = 0;

    if (use_mipmaps)
    {
        while ((w2 > 1) || (h2 > 1))
        {
            ++mml;
            size += w2 * h2;
            if (w2 > 1)
                w2 >>= 1;
            if (h2 > 1)
                h2 >>= 1;
        }
        ++size;
        ++mml;
        size *= chans;
    }
    else
    {
        size = w * h * chans;
        mml = 0;
    }

    data = new char [size];
    if (data == NULL)
        return (false);

    data_size = size;
    width = w;
    height = h;
    channels = chans;
    mipmaps = mml;
    memset (data, 0, size);

    return (true);
}

bool ezDDS::Set_Mipmap_BGRA (unsigned int map_level, const char *map_data)
{
    if ((data == NULL) || (map_level < 0) || (map_level > mipmaps))
        return (false);

    unsigned int w = width, h = height, size = 0;
    for (unsigned int i = 0; i < map_level; ++i)
    {
        size += w * h;
        if (w > 1)
            w >>= 1;
        if (h > 1)
            h >>= 1;
    }

    char *offset = data + size*channels;
    size = w * h * channels;
    for (unsigned int s = 0; s < size; ++s)
        *offset++ = *map_data++;

    return (true);
}

bool ezDDS::Save_DDS_Mipmap_Uncompressed (const char *file_name)
{
    if ((data == NULL) || (file_name == NULL))
        return (false);

    std::ofstream fout;
    DDSurfaceDesc sd;

    //	set up my control header
    memset (&sd, 0, sizeof (sd));
    sd.size = 124;
    sd.flags = 0x1 				//	CAPS
               | 0x2 			//	HEIGHT
               | 0x4 			//	WIDTH
               | 0x1000;		//	PIXELFORMAT
    if (mipmaps > 0)
    {
        sd.flags |= 0x20000;	//	MIPMAPS
        sd.mipMapLevels = mipmaps;
    }
    sd.height = height;
    sd.width = width;
    sd.pitch = channels * width;
    sd.format.size = 32;
    sd.format.flags = 0x40;		//	RGB
    if (channels > 3)
    {
        sd.format.flags |= 0x1;		//	ALPHA
        //sd.alphaBitDepth = 8;
    }
    sd.format.bpp = 8 * channels;
    sd.format.redMask = 0x00ff0000;
    sd.format.greenMask = 0x0000ff00;
    sd.format.blueMask = 0x0000000ff;
    sd.format.alphaMask = 0xff000000;
    sd.caps.caps = 0x1000;			//	TEXTURE
    if (mipmaps > 0)
    {
        sd.caps.caps |= 0x8			//	COMPLEX
                        | 0x400000;	//	MIPMAPS
    }

    //	write the DDS file
    fout.open (file_name, std::ios::out | std::ios::binary);
    fout.write ("DDS ", 4);
    fout.write ((const char *)(&sd), sizeof (sd));
    fout.write ((const char *)data, data_size);
    fout.close ();

    return (true);

}

//	for loading one
bool ezDDS::Load_DDS (const char *file_name)
{
	return (false);
}

unsigned int ezDDS::Upload_OpenGL_Texture (void)
{
	return (0);
}

unsigned int ezDDS::Get_DDS_Width (void)
{
	return (0);
}

unsigned int ezDDS::Get_DDS_Height (void)
{
	return (0);
}

unsigned int ezDDS::Get_DDS_Channels (void)
{
	return (0);
}

unsigned int ezDDS::Get_DDS_Mipmaps (void)
{
	return (0);
}

bool ezDDS::Get_Mipmap_BGRA (unsigned int map_level, char *map_data)
{
	return (false);
}
