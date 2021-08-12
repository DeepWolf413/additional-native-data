// fm_mission_controller_2020.ysc @ L472388
void func_8110()
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(Global_4456448.f_20, 20))
  {
    return;
  }
  if (PED::IS_PED_INJURED(iLocal_22078))
  {
    MISC::CLEAR_BIT(&bLocal_36035, 7);
    return;
  }
  if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_22078, false))
  {
    MISC::CLEAR_BIT(&bLocal_36035, 7);
    return;
  }
  if (MISC::IS_BIT_SET(bLocal_36035, 7))
  {
    return;
  }
  iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_22078, false);
  func_8111(iVar0);
  PHYSICS::_0x9EBD751E5787BAF2(true);
  MISC::SET_BIT(&bLocal_36035, 7);
}