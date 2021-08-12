// hunting1.ysc @ L100911
void func_2971(int iParam0)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
  {
  }
  iVar0 = func_3022();
  ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, iVar0, 0);
  iVar1 = func_3023();
  ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, iVar1, 0);
  PED::_0xDE1B1907A83A1550(iParam0, 1f);
  PED::_0x345C9F993A8AB4A4(iParam0, 1f);
  PED::_0xEF5A3D2285D8924B(iParam0, 1f);
}