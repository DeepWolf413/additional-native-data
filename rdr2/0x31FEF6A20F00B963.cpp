// av_animal_carry_ride.ysc @ L4698
int func_132(int iParam0)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
  if (iVar0 == 0)
  {
    if (ENTITY::IS_ENTITY_A_PED(iParam0))
    {
      iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
      iVar0 = func_198(iVar1);
    }
  }
  return iVar0;
}