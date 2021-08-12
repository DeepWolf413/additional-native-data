// ambient_fishing_scenario.ysc @ L385
bool func_23()
{
  if ((!PHYSICS::DOES_ROPE_EXIST(Local_5.f_8) || !ENTITY::DOES_ENTITY_EXIST(Local_5.f_5)) || !ENTITY::DOES_ENTITY_EXIST(Local_5.f_6))
  {
    return false;
  }
  if (Local_5.f_17 == 0)
  {
    PHYSICS::_0x1FC92BDBA1106BD2(Local_5.f_8, Local_5.f_14);
    PHYSICS::START_ROPE_WINDING(Local_5.f_8);
    Local_5.f_17 = 1;
  }
  else if (PHYSICS::_0x3D69537039F8D824(Local_5.f_8) <= Local_5.f_10)
  {
    PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_5.f_8);
    Local_5.f_17 = 0;
    PHYSICS::SET_DAMPING(Local_5.f_5, 0, Local_5.f_15);
    PHYSICS::SET_DAMPING(Local_5.f_6, 0, Local_5.f_15);
    return true;
  }
  return false;
}