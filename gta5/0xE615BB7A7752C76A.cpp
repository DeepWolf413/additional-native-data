// fm_bj_race_controler.ysc @ L322419
void func_4505(var uParam0, var uParam1)
{
  if (!func_415())
  {
    return;
  }
  if (func_142(PLAYER::PLAYER_ID(), 0))
  {
    return;
  }
  if (func_258(uParam0->f_570))
  {
    return;
  }
  if (func_775(func_363(uParam0->f_571, 0)) || func_363(uParam0->f_571, 0) == joaat("dune3"))
  {
    if (!func_4161(uParam1->f_5318))
    {
      VEHICLE::_SET_DISABLE_TURRET_MOVEMENT_THIS_FRAME(uParam1->f_5318, 0);
    }
  }
}