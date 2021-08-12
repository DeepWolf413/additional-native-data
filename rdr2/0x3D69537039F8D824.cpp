// ambient_fishing_scenario.ysc @ L363
bool func_22(int iParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !PHYSICS::DOES_ROPE_EXIST(Local_5.f_8))
  {
    return false;
  }
  if (Local_5.f_17 == 0)
  {
    PHYSICS::_0x1FC92BDBA1106BD2(Local_5.f_8, Local_5.f_13);
    PHYSICS::START_ROPE_UNWINDING_FRONT(Local_5.f_8);
    Local_5.f_17 = 1;
    func_25(iParam0);
  }
  else if (PHYSICS::_0x3D69537039F8D824(Local_5.f_8) >= Local_5.f_12)
  {
    PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_5.f_8);
    Local_5.f_17 = 0;
    return true;
  }
  return false;
}