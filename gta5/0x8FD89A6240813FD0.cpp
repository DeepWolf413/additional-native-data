// fm_mission_controller_2020.ysc @ L706203
void func_12797()
{
  if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_22078, false))
  {
    TASK::SET_PED_CAN_PLAY_AMBIENT_IDLES(iLocal_22078, true, true);
  }
  PAD::DISABLE_CONTROL_ACTION(0, 75, true);
  PAD::DISABLE_CONTROL_ACTION(0, 23, true);
}