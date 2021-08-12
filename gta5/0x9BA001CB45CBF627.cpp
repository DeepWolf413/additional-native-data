// am_mp_casino_apartment.ysc @ L413077
void func_6737(int iParam0, float fParam1)
{
  struct<3> Var0;
  int iVar3;
  
  if (func_6740(iParam0))
  {
    Var0 = { func_6739(iParam0) };
    iVar3 = func_6738(iParam0);
    if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
    {
      OBJECT::ADD_DOOR_TO_SYSTEM(iParam0, iVar3, Var0, false, false, false);
    }
    OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(iParam0, fParam1, false, true);
  }
}