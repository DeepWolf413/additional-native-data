// fm_mission_controller.ysc @ L837582
void func_14037()
{
  int iVar0;
  
  if (func_499())
  {
    func_8232(1);
    Global_1683970.f_3493 = 1;
    if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3286, false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_3286, false);
      if (func_385(iVar0))
      {
        VEHICLE::_SET_VEHICLE_BOMB_COUNT(iVar0, 0);
      }
    }
  }
}