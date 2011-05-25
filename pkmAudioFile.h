/*
 *  pkmAudioFile.h
 *  autoGrafittiMapKit
 *
 *  Created by Mr. Magoo on 5/12/11.
 *  Copyright 2011 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once

class pkmAudioFile
{
public:
	pkmAudioFile()
	{
		buffer = 0;
		offset = 0;
		length = 0;
		weight = 0;
	}
	
	pkmAudioFile(float *&buf, int pos, int size, float w = 1.0)
	{
		buffer = buf;
		offset = pos;
		length = size;
		weight = w;
	}
	
	~pkmAudioFile()
	{
		buffer = 0;
		weight = offset = length = 0;
	}
	
	pkmAudioFile(const pkmAudioFile &rhs)
	{
		buffer = rhs.buffer;
		offset = rhs.offset;
		length = rhs.length;
		weight = rhs.weight;
	}
	
	
	float		*buffer;
	float		weight;
	int			offset, 
				length;
};