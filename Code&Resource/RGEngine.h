#ifndef _RGENGINE_H_
#define _RGENGINE_H_

// �������� int main����
#pragma comment(linker, "/ENTRY:mainCRTStartup")

#ifdef _DEBUG
#pragma comment(linker, "/SUBSYSTEM:CONSOLE") // ������Ͻ� �ܼ�âǥ��
#else
#pragma comment(linker, "/SUBSYSTEM:WINDOWS") // �������Ͻ� �ܼ�â����
#endif

#include "RGApplication.h"
#include "RGGameObject.h"
#include "RGComponent.h"
#include "RGTypes.h"
#include "RGMath.h"

#include "RGComponentBoxCollider.h"
#include "RGComponentCircleCollider.h"
#include "RGComponentSpriteRenderer.h"
#include "RGComponentAnimationRenderer.h"
#include "RGComponentTextRenderer.h"
#include "RGComponentAudioSource.h"
#include "RGComponentAudioListener.h"

#include "RGDataStreamFile.h"
#include "RGDataStreamJSON.h"
#include "RGDataStreamXML.h"

#include <iostream>

using namespace std;

#endif //_RGENGINE_H_