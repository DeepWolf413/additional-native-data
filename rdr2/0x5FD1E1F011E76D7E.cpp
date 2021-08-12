// mudtown5.ysc @ L77606
void func_1844()
{
  if (!func_891(Global_35, 0))
  {
    return;
  }
  if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_REVOLVER")) < 6)
  {
    WEAPON::SET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_REVOLVER"), 24);
  }
  if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_REPEATER")) < 6)
  {
    WEAPON::SET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_REPEATER"), 24);
  }
  if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_RIFLE")) < 6)
  {
    WEAPON::SET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_RIFLE"), 22);
  }
}