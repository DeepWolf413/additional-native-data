// native_son2.ysc @ L81027
void func_2366(var uParam0, int* iParam1, float fParam2)
{
  if (PHYSICS::DOES_ROPE_EXIST(*uParam0) && fParam2 > 0f)
  {
    PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, uParam0->f_2);
    PHYSICS::DETACH_ROPE_FROM_ENTITY(*uParam0, Global_35);
    uParam0->f_2 = Global_35;
    PHYSICS::_0xC64E7A62632AD2FE(*uParam0, uParam0->f_2, vLocal_379, sLocal_56, 0, 0);
    func_2708(iParam1, fParam2, 1108082688 /* Float: 35f */, 125);
  }
}

Vector3 func_2367(var uParam0, int iParam1)
{
  if (PHYSICS::DOES_ROPE_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam1, PHYSICS::GET_ROPE_LAST_VERTEX_COORD(*uParam0));
  }
  return 0f, 0f, 0f;
}