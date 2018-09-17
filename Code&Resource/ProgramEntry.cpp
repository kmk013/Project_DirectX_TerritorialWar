#include "RGEngine.h"
#include "MainScene.h"

int main(void)
{
	RGApp->Initialize(L"¿µÅä ÀüÀï", 1024, 768, false);
	RGAsset->Initialize();

	RGApp->ChangeScene(new MainScene());

	while (RGGraphic->Validate())
	{
		if (RGGraphic->Process())
		{
			RGApp->Update();

			if (RGGraphic->BeginScene())
			{
				RGApp->Render();

				RGGraphic->EndScene();
			}
		}
	}

	return 0;
}