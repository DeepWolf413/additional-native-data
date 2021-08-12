// rcm_war_veteran2.ysc @ L17490
bool func_554()
{
  int iVar0;

  if (func_1077(func_361(Global_35, 1, 0, 0)))
  {
    iVar0 = WEAPON::_0x7E7B19A4355FEE13(Global_35, WEAPON::_0x6CA484C9A7377E4F(Global_35, 1));
    if (iVar0 == joaat("AMMO_ARROW_FIRE") || iVar0 == joaat("AMMO_ARROW_DYNAMITE"))
    {
      return true;
    }
    else
    {
      return false;
    }
  }
  return false;
}