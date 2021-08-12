// fm_mission_controller_2020.ysc @ L434421
void func_7193(var uParam0)
{
  if (func_5997(uParam0, 1))
  {
    if (uParam0->f_17 == joaat("dune4"))
    {
      if (!MISC::IS_BIT_SET(bLocal_36037, 3))
      {
        VEHICLE::_SET_VEHICLE_RAMP_SIDEWAYS_LAUNCH_MOTION(uParam0->f_11, 1);
        MISC::SET_BIT(&bLocal_36037, 3);
      }
    }
  }
  else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_22078, false))
  {
    if (MISC::IS_BIT_SET(bLocal_36037, 3))
    {
      MISC::CLEAR_BIT(&bLocal_36037, 3);
    }
  }
}