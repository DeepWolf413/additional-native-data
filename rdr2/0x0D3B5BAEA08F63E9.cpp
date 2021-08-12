// beat_savage_wagon.ysc @ L2251
void func_64(int iParam0, int iParam1, int iParam2)
{
  if (!func_22(iParam1) && iParam2 != 0)
  {
    if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uLocal_342[iParam0]) <= 0.25f)
    {
      func_198(&(uLocal_342[iParam0]), iParam2);
      func_15(iParam1);
    }
  }
}