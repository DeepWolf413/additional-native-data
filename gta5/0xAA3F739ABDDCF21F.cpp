// fm_race_creator.ysc @ L454653
void func_7531(int iParam0)
{
  var uVar0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 2))
  {
    if (VEHICLE::HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE())
    {
      VEHICLE::_CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE();
    }
  }
}