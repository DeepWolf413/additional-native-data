// fm_mission_controller.ysc @ L808105
int func_13631(int iParam0, int iParam1)
{
  struct<3> Var0;
  float fVar3;
  float fVar4;
  
  if (func_385(iParam0))
  {
    Var0 = { func_343(ENTITY::GET_ENTITY_COORDS(iParam1, true) - ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
    fVar3 = func_1048(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), Var0);
    fVar4 = func_10157(PED::_GET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0));
    return fVar3 >= (1f - fVar4);
  }
  return 0;
}