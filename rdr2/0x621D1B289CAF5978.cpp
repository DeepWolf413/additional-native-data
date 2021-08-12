// ambush_exc_road_robbery.ysc @ L10370
void func_343(var uParam0, var uParam1)
{
  if (!func_126(uParam1, 16384))
  {
    if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER"))) || PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
    {
      if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
      {
        func_143(uParam1, 16384);
      }
    }
  }
}