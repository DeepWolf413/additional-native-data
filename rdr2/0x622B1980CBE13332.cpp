// aberdeenpigfarm.ysc @ L4995
void func_217(int iParam0)
{
  int iVar0;

  if (!func_92(iParam0))
  {
    return;
  }
  iVar0 = func_255(iParam0);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
    {
      ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
    }
  }
  Global_1895087[iParam0 /*3*/].f_2 = 0;
}