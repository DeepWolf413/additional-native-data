// am_mp_defunct_base.ysc @ L433795
void func_6985()
{
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("khanjali")))
    {
      iLocal_10860 = 1;
      CAM::_0x380B4968D1E09E55();
    }
  }
  else
  {
    if (iLocal_10860)
    {
      func_299(&uLocal_10861, 0, 0);
      iLocal_10860 = 0;
    }
    if (func_200(&uLocal_10861))
    {
      if (func_198(&uLocal_10861, 500, 0))
      {
        func_197(&uLocal_10861);
      }
      CAM::_0x380B4968D1E09E55();
    }
  }
}