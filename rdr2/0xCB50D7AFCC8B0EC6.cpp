// finale1.ysc @ L97877
bool func_2603(var uParam0, float fParam1)
{
  int iVar0;
  float fVar1;
  float fVar2;

  iVar0 = 0;
  while (iVar0 < *uParam0)
  {
    if (!func_1124((*uParam0)[iVar0 /*8*/], 75))
    {
    }
    else if (func_1003((*uParam0)[iVar0 /*8*/], Global_35, fParam1, 1) && GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*8*/], true, false), &fVar1, &fVar2))
    {
      if (((fVar1 >= 0.25f && fVar1 <= 0.75f) && fVar2 >= 0.2f) && fVar2 <= 0.8f)
      {
        return true;
      }
    }
    iVar0++;
  }
  return false;
}