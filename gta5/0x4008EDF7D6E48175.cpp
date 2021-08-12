// freemode.ysc @ L846271
void func_12881(var uParam0)
{
  bool bVar0;
  
  if (uParam0->f_24)
  {
    bVar0 = true;
  }
  if (bVar0)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_31, false))
      {
        CAM::_0x4008EDF7D6E48175(true);
        if (func_565(0))
        {
          PAD::DISABLE_CONTROL_ACTION(0, 24, true);
          PAD::DISABLE_CONTROL_ACTION(0, 66, true);
          PAD::DISABLE_CONTROL_ACTION(0, 67, true);
          PAD::DISABLE_CONTROL_ACTION(0, 68, true);
          PAD::DISABLE_CONTROL_ACTION(0, 69, true);
          PAD::DISABLE_CONTROL_ACTION(0, 70, true);
          PAD::DISABLE_CONTROL_ACTION(0, 91, true);
          PAD::DISABLE_CONTROL_ACTION(0, 92, true);
        }
      }
    }
  }
}