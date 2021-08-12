// fm_race_controler.ysc @ L542770
void func_9322(int iParam0, int iParam1, int iParam2)
{
  if (VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(iParam0))
  {
    if (!VEHICLE::_IS_VEHICLE_WEAPON_DISABLED(iParam2, iParam0, iParam1))
    {
      VEHICLE::DISABLE_VEHICLE_WEAPON(true, iParam2, iParam0, iParam1);
    }
  }
}