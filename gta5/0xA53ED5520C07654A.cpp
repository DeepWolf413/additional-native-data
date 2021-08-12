// am_casino_peds.ysc @ L310335
void func_4312(int iParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  struct<3> Var2;
  int iVar5;
  int iVar6;
  
  if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    return;
  }
  iVar0 = func_4315(iParam0);
  iVar1 = 0;
  while (iVar1 < iVar0)
  {
    Var2 = { func_4314(iParam0, iVar1) };
    iVar5 = func_4313(iParam0, iVar1);
    iVar6 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var2, 1f, iVar5, false, false, true);
    if (ENTITY::DOES_ENTITY_EXIST(iVar6))
    {
      ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar6, *uParam1, false);
    }
    iVar1++;
  }
}