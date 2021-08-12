// utopia2.ysc @ L95547
bool func_2563(bool bParam0)
{
  if (!func_2568(bParam0))
  {
    return false;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FOCUS_CAM"), false);
    if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
    {
      if (PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_FOCUS_CAM")))
      {
        CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
        return true;
      }
    }
  }
  return false;
}