// mudtown3.ysc @ L56293
void func_1370()
{
  float fVar0;
  float fVar1;

  if (iLocal_1360 != 0)
  {
    return;
  }
  if (func_1120(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
  {
    return;
  }
  fVar0 = 18f;
  fVar1 = WEAPON::_0x3799EFCC3C8CD5E1(Global_35);
  if (fVar1 > fVar0)
  {
    PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PLAYER::PLAYER_ID(), fVar0);
  }
}