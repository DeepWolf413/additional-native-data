// fm_bj_race_controler.ysc @ L23022
void func_445(var uParam0, var uParam1)
{
  if (!func_289(uParam0->f_5318) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5318))
  {
    if (VEHICLE::_GET_TYRE_WEAR_MULTIPLIER(uParam0->f_5318, 0) != Global_4456448.f_134202[Global_1390682])
    {
      func_446(uParam0->f_5318);
    }
  }
}