#pragma once
#include "Renderer.h"

struct vec3
{
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};

enum class Primitive
{
	Cube = 0,
	Cylinder = 1,
	Cone = 2,
	Tours = 3,
	Teapot = 4,
	Sphere = 5,
	WireCube,
	Model
};

struct Color
{
	float R = 1.0f, G = 1.0f, B = 1.0f;
};



class Model
{

public:
	Model();
	static int numofModels;

	void Render();
	void Animate();

	void Translate(float f_x, float f_y, float f_z);
	void TranslateAccum(float f_x, float f_y, float f_z);

	void Scale(float f_x, float f_y, float f_z);

	void Rotate(float x, float y, float z, float centerX = 0.0f, float centerY = 0.0f, float centerZ = 0.0f);

	Primitive GetPrimitive() const { return prim; }
	std::string GetPrimitveString();


	void SetColor(float R, float G, float B);
	void SetAnimParam(float transX, float transY, float transZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ);
	void PlaySoundOnce();
	void PlayAnimSoundOnce();

	void CreateTours(float innerRadius = 0.1f, float outerRadius = 0.8f, int sidesNum = 10, int rings = 10);
	void CreateCylinder(float baseRadius = 0.5f, float topRadius = 0.5f, float height = 0.5f, float slices = 10, float stacks = 10);
	void CreateCube(float size = 0.5f);
	void CreateWireCube(float size = 0.5f);
	void CreateCone(float base = 0.5f, float height = 0.5f, int slices = 10, int stacks = 10);
	void CreateSphere(float radius = 0.5f, float slices = 10, float stacks = 10);
	void CreateTeapot(float size = 0.5f);
	void Draw3DModel();
	void Assign3DModel(std::string path);

	float size = 0.5f;	// Also Base & Base Radius
	float radius = 1.0f;
	float modelHeight = 1.0f; // Also outerRadius
	int slices = 10; //Also SidesNum
	int stacks = 10; //Also Rings

	std::string path;
	std::string soundFileName;
	std::string animSoundFileName;


	int group = -1;
	std::string id = "0";
	bool uniformScale = false;
	bool hidden = false;

	bool selected = false;
	bool collider = false;
	bool animated = false;
	bool animateNow = false;
	float animTime = 2.0f;
	std::vector<float> rotFactor = { 0.0f, 0.0f, 0.0f };
	std::vector<float> scaleFactor = { 0.0f, 0.0f, 0.0f };
	std::vector<float> transFactor = { 0.0f, 0.0f, 0.0f };

	Model_3DS* model3D = nullptr;

	std::vector<float> position{ 0.0f, 0.0f, 0.0f };
	std::vector<float> scale{ 1.0f, 1.0f, 1.0f };
	std::vector<float> rotate{ 0.0f, 0.0f, 0.0f };
	std::vector<float> groupTrans{ 0.0f, 0.0f, 0.0f };
	std::vector<float> groupRotate{ 0.0f, 0.0f, 0.0f };
	std::vector<float> groupCenter{ 0.0f, 0.0f, 0.0f };


	Color color;

	std::string GetName();

	std::vector<float> positionAnim{ 0.0f, 0.0f, 0.0f };
	std::vector<float> rotateAnim{ 0.0f, 0.0f, 0.0f };
	std::vector<float> scaleAnim{ 0.0f, 0.0f, 0.0f };


private:
	Primitive prim;

	void AssignVariables(Primitive prim = Primitive::Cube, float size = 0.0f, float radius = 0.0f, float outerRadius = 0.0f, int slices = 0, int slacks = 0);

};