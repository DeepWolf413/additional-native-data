// fm_mission_controller_2020.ysc @ L805912
void func_15007(int iParam0)
{
  struct<4> Var0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
  {
    if (Var0 != 1032146558)
    {
      return;
    }
    if (WEAPON::_DOES_AIR_DEFENSE_ZONE_EXIST(iLocal_34878[Var0.f_2]))
    {
      WEAPON::_FIRE_AIR_DEFENSE_WEAPON(iLocal_34878[Var0.f_2], Var0.f_3);
    }
    else
    {
      FIRE::ADD_EXPLOSION(Var0.f_3, 42, 1f, true, false, 1f, false);
    }
  }
}