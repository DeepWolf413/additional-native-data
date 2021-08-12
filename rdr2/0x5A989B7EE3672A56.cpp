// shoprobberies.ysc @ L48442
void func_1672(int* iParam0, var uParam1, var uParam2)
{
  *uParam2 = PHYSICS::_ADD_ROPE_2(0f, 0f, 1f, 0f, 0f, 0f, 0.32f, 7, false, 31, -1f);
  PHYSICS::_0x522FA3F490E2F7AC(*uParam2, 1, 1);
  PHYSICS::_0xBB3E9B073E66C3C9(*uParam2, 1, 0, 1, 0);
  PHYSICS::_0xF27F1A8DE4F50A1B(*uParam2, 0.025f, -0.025f, 0.9993f, 1321.729f, -1319.462f, 73.95f);
  PHYSICS::_0x5A989B7EE3672A56(*uParam2, 1);
  PHYSICS::ATTACH_ENTITIES_TO_ROPE(*uParam2, *uParam1, *iParam0, 1321.729f, -1319.462f, 74.2913f, -0.04f, 0f, 0.05f, 1.31f, 0, 0, "", "", 0, -1, 33646, 0, 0, 1, 1);
  PHYSICS::_0x522FA3F490E2F7AC(*uParam2, 0, 1);
}