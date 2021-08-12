// braithwaites2.ysc @ L82029
void func_2295(struct<2> Param0, float fParam2)
{
  int iVar0;
  int iVar1;

  if (!func_258(Param0))
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < func_259(Param0))
  {
    iVar1 = func_1545(Param0, iVar0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar1))
    {
      if (ENTITY::IS_ENTITY_A_PED(iVar1))
      {
        PED::SET_PED_ID_RANGE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), fParam2);
      }
    }
    iVar0++;
  }
}