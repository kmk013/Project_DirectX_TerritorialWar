#ifndef _RGCOMPONENTBOXCOLLIDER_H_
#define _RGCOMPONENTBOXCOLLIDER_H_

#include "RGComponentCollider.h"
#include "RGMath.h"

namespace RGEngine
{
	namespace Components
	{
		class BoxCollider : public Collider
		{
		public:
			Math::Rect box; // ���� ��ǥ���� transform�� ��ǥ(���� ��) ����
			Math::Rect GetBoxWithPosition(void) const;

		public:
			BoxCollider(GameObject *gameObject);
			~BoxCollider() override;

		public:
			void Reset(void) override;
			std::type_index GetID(void) override { return typeid(BoxCollider); }
			static std::type_index GetFamilyID(void) { return typeid(Collider); }

		public:
			// OnCreate -> Constructor
			// OnDestroy -> Destroyer
			void OnUpdate(void) override;

		};
	}
}

#endif // _RGCOMPONENTBOXCOLLIDER_H_