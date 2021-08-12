// am_hunt_the_beast.ysc @ L113820
int func_829(int iParam0)
{
  int iVar0;
  float fVar1;
  float fVar2;
  struct<3> Var3;
  
  iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 23553);
  if (iVar0 != -1)
  {
    Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
    GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar1, &fVar2);
    if (((fVar1 > 0.2f && fVar1 < 0.8f) && fVar2 > 0.2f) && fVar2 < 0.8f)
    {
      return 1;
    }
  }
  return 0;
}