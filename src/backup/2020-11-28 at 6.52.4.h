#pragma once
#include "Model.h"
void GenerateModels(std::vector<Model>& models, std::vector<Object>& objs)
{

//Backup at: 2020-11-28 at: 6:52:4

Object Character0("Character");
Character0.SetCenter(0,0,0);
Character0.SetGroupTranslate(0,0,0);
Character0.SetGroupRotate(0,0,0);
objs.emplace_back(Character0);

Object Coins1("Coins");
Coins1.SetCenter(0,0,0);
Coins1.SetGroupTranslate(0,0,0);
Coins1.SetGroupRotate(0,0,0);
objs.emplace_back(Coins1);

Object Group8002("Group800");
Group8002.SetCenter(0,0,0);
Group8002.SetGroupTranslate(0,0,0);
Group8002.SetGroupRotate(0,0,0);
objs.emplace_back(Group8002);

 // Model3D0
Model Model3D0;
Model3D0.Assign3DModel("models/tree/Tree1.3ds");
Model3D0.Translate(-0.16, -0.29, 0.38);
Model3D0.Scale(0.32, 0.32, 0.32);
Model3D0.Rotate(179.5, -193.5, 0);
models.emplace_back(Model3D0);

 // 1
Model 1;
1.Translate(0, 0, 0);
models.emplace_back(1);

 // 2
Model 2;
2.Translate(0, 0, 0);
models.emplace_back(2);

 // 3
Model 3;
3.Translate(0, 0, 0);
models.emplace_back(3);

 // 4
Model 4;
4.Translate(0, 0, 0);
models.emplace_back(4);

}
