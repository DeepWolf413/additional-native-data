// odriscolls4.ysc @ L36374
bool func_796(var uParam0)
{
  int iVar0;

  func_1290(uParam0);
  iVar0 = 0;
  while (iVar0 < 14)
  {
    if (func_465(Local_750[iVar0 /*8*/]))
    {
      func_1014(Local_750[iVar0 /*8*/], 1);
    }
    iVar0++;
  }
  if (!func_163(uLocal_399, 131072))
  {
    TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(sLocal_1146);
    TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1146);
  }
  func_459(&iLocal_407);
  func_459(&iLocal_408);
  if (PED::_0x5102307CE88798EB(Local_750[12 /*8*/]))
  {
    PED::_0x3088634CF8C819CF(Local_750[12 /*8*/]);
  }
  if (PED::_0x5102307CE88798EB(Local_750[13 /*8*/]))
  {
    PED::_0x3088634CF8C819CF(Local_750[13 /*8*/]);
  }
  return uParam0->f_607 == uParam0->f_607;
}